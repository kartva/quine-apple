module Minifier 
  ( minifyC
  ) where

import           Control.Monad              (void)
import           Data.Char                  (isAlphaNum, isSpace)
import           Data.Void
import           Text.Megaparsec            hiding (Token)
import           Text.Megaparsec.Char
import qualified Text.Megaparsec.Char.Lexer as L


-- * Token and StringChar definitions

-- | A StringChar is either a normal character or an escaped character.
data StringChar = NormalChar Char | EscapedChar Char
  deriving (Show, Eq)

-- | The tokens produced by our lexer.
data Token
  = TPreprocessor String      -- ^ Preprocessor directive (line starting with '#' at col 1)
  | TWord String              -- ^ A contiguous alphanumeric word.
  | TSymbol String            -- ^ A maximal sequence of non-alphanumeric, non‐whitespace symbols.
  | TSingleComment String     -- ^ A single‐line comment beginning with "//".
  | TMultiComment String      -- ^ A multi‐line comment enclosed in "/* … */".
  | TString [StringChar]      -- ^ A string literal made up of a list of StringChar.
  deriving (Show, Eq)

-- * Parser definitions

type Parser = Parsec Void String

-- | Consumes spaces.
sc :: Parser ()
sc = L.space space1 empty empty

-- | Top-level token parser.
pTokens :: Parser [Token]
pTokens = many (pToken <* sc)

-- | Parse one token.
pToken :: Parser Token
pToken = choice
  [ try pPreprocessor
  , try pSingleLineComment
  , try pMultiLineComment
  , try pString
  , try pWord
  , pSymbol
  ]

-- | Parse a preprocessor directive. Must occur at column 1.
pPreprocessor :: Parser Token
pPreprocessor = do
  pos <- getSourcePos
  if unPos (sourceColumn pos) == 1
    then do
      d <- char '#' >> manyTill anySingle (try (void newline) <|> eof)
      _ <- optional newline
      return $ TPreprocessor ('#':d)
    else
      fail "Preprocessor directive only valid at beginning of line"

-- | Parse a single-line comment.
pSingleLineComment :: Parser Token
pSingleLineComment = do
  _ <- string "//"
  content <- manyTill anySingle (try (void newline) <|> eof)
  return $ TSingleComment ("//" ++ content)

-- | Parse a multi-line comment.
pMultiLineComment :: Parser Token
pMultiLineComment = do
  _ <- string "/*"
  content <- manyTill anySingle (try (string "*/"))
  return $ TMultiComment ("/*" ++ content ++ "*/")

-- | Parse a string literal.
pString :: Parser Token
pString = do
  _ <- char '"'
  content <- manyTill pStringChar (char '"')
  return $ TString content

-- | Parse a character inside a string literal.
pStringChar :: Parser StringChar
pStringChar =
      (do _ <- char '\\'
          c <- anySingle
          return (EscapedChar c))
  <|> (do c <- satisfy (\x -> x /= '"' && x /= '\\' && x /= '\n')
          return (NormalChar c))

-- | Parse an alphanumeric word.
pWord :: Parser Token
pWord = do
  w <- some (satisfy isAlphaNum)
  return $ TWord w

-- | Parse a symbol token.
pSymbol :: Parser Token
pSymbol = do
  c <- satisfy (\x -> not (isAlphaNum x) && not (isSpace x) && x /= '"')
  rest <- many (satisfy (\x -> not (isAlphaNum x) && not (isSpace x) && x /= '"'))
  return $ TSymbol (c:rest)

-- * Postprocessing of tokens

-- | Merge consecutive string tokens.
mergeStrings :: [Token] -> [Token]
mergeStrings [] = []
mergeStrings (TString s1 : TString s2 : ts) =
  mergeStrings (TString (s1 ++ s2) : ts)
mergeStrings (t:ts) = t : mergeStrings ts

-- | Remove comment tokens.
removeComments :: [Token] -> [Token]
removeComments = filter keepToken
  where
    keepToken t = case t of
                    TSingleComment _ -> False
                    TMultiComment  _ -> False
                    _                -> True

-- * Helper functions for printing strings

-- | Render a StringChar to its printed form.
printStringChar :: StringChar -> String
printStringChar (NormalChar c)  = [c]
printStringChar (EscapedChar c) = ['\\', c]

-- | Compute the printed length of a StringChar.
printedLength :: StringChar -> Int
printedLength (NormalChar _)  = 1
printedLength (EscapedChar _) = 2

-- | Break a list of StringChar into a chunk that fits within maxLen, and possibly a remainder.
-- It returns a pair: (chunk, maybe rest). The function never splits an EscapedChar.
breakStringChars :: Int -> [StringChar] -> ([StringChar], Maybe [StringChar])
breakStringChars _ [] = ([], Nothing)
breakStringChars maxLen xs = go [] 0 xs
  where
    go current _ [] = (current, Nothing)
    go current acc rest@(t:ts)
      -- If nothing is accumulated yet and t alone exceeds maxLen,
      -- we force t into the chunk. (This case is unlikely if maxLen is chosen properly.)
      | null current && printedLength t > maxLen = ([], Just (t:ts))
      | acc + printedLength t <= maxLen = go (current ++ [t]) (acc + printedLength t) ts
      | otherwise = (current, Just rest)

-- * Pretty-printing and minification

-- | The pretty-printer state.
data PPState = PPState
  { currentLine :: String   -- ^ Current line being built.
  , outputLines :: [String]   -- ^ Already completed lines.
  , lastWasWord :: Bool       -- ^ Was the previous token a word?
  }

initialState :: PPState
initialState = PPState "" [] False

-- | Flush the current line into the output.
flushLine :: PPState -> PPState
flushLine st@(PPState cl outs _)
  | null cl   = st
  | otherwise = st { currentLine = "", outputLines = outs ++ [cl], lastWasWord = False }

-- | Append text to the current line.
appendText :: String -> PPState -> PPState
appendText txt st = st { currentLine = currentLine st ++ txt }

-- | Break the line by appending a break marker (" \\") then flushing.
breakLine :: PPState -> PPState
breakLine st = flushLine (appendText " \\" st)

-- | Emit tokens to the output. This function is sensitive to the token type
-- and the available space on the current line.
emitTokens :: Int -> [Token] -> PPState -> PPState
emitTokens maxWidth tokens_ st =
  case tokens_ of
    [] -> st
    token_:tks ->
      case token_ of
        -- Preprocessor directives appear on their own line with blank lines before and after.
        TPreprocessor s ->
          let st1 = flushLine st
              st2 = st1 { outputLines = outputLines st1 ++ [s] }
          in emitTokens maxWidth tks (flushLine st2)
        -- For words, insert a space if the previous token was also a word.
        TWord s ->
          let sep = if lastWasWord st then " " else ""
              candidate = sep ++ s
          in if length (currentLine st) + length candidate <= maxWidth
                then emitTokens maxWidth tks st { currentLine = currentLine st ++ candidate, lastWasWord = True }
                else let st' = breakLine st
                    in emitTokens maxWidth tks st' { currentLine = currentLine st' ++ s, lastWasWord = True }
        -- Symbols are appended with no extra separator.
        TSymbol s ->
          let candidate = s
          in if length (currentLine st) + length candidate <= maxWidth
                then emitTokens maxWidth tks st { currentLine = currentLine st ++ candidate, lastWasWord = False }
                else let st' = breakLine st
                     in emitTokens maxWidth tks st' { currentLine = currentLine st' ++ candidate, lastWasWord = False }
        -- For strings, we try to emit the whole literal if it fits.
        -- Otherwise, we break it into a chunk that fits, then recursively process the remainder.
        TString s ->
          let printedFull = concatMap printStringChar s
              tokenFull = "\"" ++ printedFull ++ "\""
          in if length (currentLine st) + length tokenFull <= maxWidth
                then emitTokens maxWidth tks st { currentLine = currentLine st ++ tokenFull, lastWasWord = False }
                else
                  let remainingChunkSize = maxWidth - length (currentLine st) - 2  -- leave room for quotes
                      (chunk_, mRest) = breakStringChars remainingChunkSize s
                      sChunk = if null chunk_ then "" else "\"" ++ concatMap printStringChar chunk_ ++ "\""
                      st2 = st { currentLine = currentLine st ++ sChunk, lastWasWord = False }
                  in case mRest of
                    Nothing   -> emitTokens maxWidth tks st2
                    Just rest -> emitTokens maxWidth (TString rest : tks) (flushLine st2)
        -- Comments have been removed already.
        _ -> st

-- | Assemble tokens into minified output.
prettyPrintTokens :: Int -> [Token] -> String
prettyPrintTokens maxWidth toks =
  let stFinal = emitTokens maxWidth toks initialState                      
      stOut = flushLine stFinal
      allLines = outputLines stOut ++ [currentLine stOut | not (null (currentLine stOut))]
  in unlines allLines

-- | Top-level minifier: tokenize the input, merge strings, remove comments, and pretty-print.
minifyC :: Int -> String -> String
minifyC maxWidth code =
  case runParser pTokens "" code of
    Left err   -> error (errorBundlePretty err)
    Right toks ->
      let toksMerged   = mergeStrings toks
          toksClean    = removeComments toksMerged
      in prettyPrintTokens maxWidth toksClean