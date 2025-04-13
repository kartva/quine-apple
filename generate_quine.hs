import Data.List ( group, intercalate )
import System.Environment (getArgs)
import System.IO (readFile, writeFile)
import Data.Char (isSpace)
import Control.Monad.RWS.Strict (MonadState(put))

-- Escape special characters to make this a valid string literal
escapeForCString :: String -> String
escapeForCString = concatMap escapeChar
  where
    escapeChar '\\' = "\\\\"
    escapeChar '\"' = "\\\""
    escapeChar '\n' = "\\n"
    escapeChar c    = [c]

-- Replace the first occurrence of '@' in the template with the generated code
replacePlaceholder :: String -> String -> String
replacePlaceholder template code =
  let (before, after) = break (== '@') template
  in before ++ code ++ drop 1 after

-- Generate the quine-like program
generateQuine :: String -> String
generateQuine template =
  replacePlaceholder template escapedQuineString
  where escapedQuineString = escapeForCString template

-- Strip (only) tabs and newlines from the string.
stripTabsAndNewlines :: String -> String
stripTabsAndNewlines = filter (not . (`elem` "\t\n"))

-- First removes tabs, then comments (lines that start with "//").
-- Then removes newlines, but then injects newlines for lines that start with '#'.
compactCCode :: String -> String
compactCCode code =
  let linesWithTabs = lines code
      strippedLines :: [String] = map (filter (not . (`elem` "\t"))) linesWithTabs
      linesWithoutComments :: [String] = filter (not . isComment) strippedLines
      linesWithoutCommentsAndNewlines = map (filter (not . (`elem` "\n"))) linesWithoutComments
  in concatMap injectNewlineIfNeeded linesWithoutCommentsAndNewlines
  where
    isPrefixOf prefix str = take (length prefix) str == prefix
    isComment line = "//" `isPrefixOf` line
    injectNewlineIfNeeded line =
      if "#" `isPrefixOf` line
      then line ++ "\n"
      else line

main :: IO ()
main = do
  args <- getArgs
  case args of
    [templateFile, maxWidthStr] -> do
      putStrLn $ "Reading template from " ++ templateFile
      putStrLn $ "Max width for wrapping: " ++ maxWidthStr
      putStrLn "Generating quine-like program..."
      let maxWidth = read maxWidthStr :: Int
      let outputFile = deriveOutputFileName templateFile
      template <- readFile templateFile
      let compactedTemplate = compactCCode template
      putStrLn $ "Template code (compacted):\n" ++ compactedTemplate
      let formattedTemplate = formatCCode maxWidth compactedTemplate
      putStrLn $ "Template code (formatted):\n" ++ formattedTemplate
      let generatedCode = generateQuine formattedTemplate
      putStrLn $ "Generated code:\n" ++ generatedCode
      let formattedCode = formatCCode maxWidth generatedCode
      putStrLn $ "Formatted code:\n" ++ formattedCode
      writeFile outputFile formattedCode
      putStrLn $ "Generated quine-like program written to " ++ outputFile
    _ -> putStrLn "Usage: runhaskell generate_quine.hs <templateFile> <maxWidth> OR runhaskell generate_quine.hs test"

-- Derive the output file name by splitting the input file name by the last extension
deriveOutputFileName :: String -> String
deriveOutputFileName inputFile =
  let (name, _) = break (== '.') inputFile
  in name ++ ".pack.c"

-- | Main entry point.
--
-- | Format C code to fit within the specified width.
-- Preprocessor directives (lines starting with '#') are passed through without reflow.
-- For other lines the function parses out string literals (delimited by unescaped double‐quotes)
-- so that:
--
--  * Inside string literals: breaks are allowed arbitrarily every N characters (except that if a break would occur right
--    after a backslash the break is made before it). A break here terminates the current line with a closing quote
--    and begins the next line with an opening quote.
--
--  * Outside string literals: breaks occur only at word boundaries (white–space is used as delimiter) and a backslash is
--    inserted at the end of each line when a break is inserted.
--
-- The overall function works line–by–line.
formatCCode :: Int -> String -> String
formatCCode maxWidth src =
  unlines $ concatMap (processLine maxWidth) (lines src)

------------------------------------------------------------
-- Process a single line.
------------------------------------------------------------
processLine :: Int -> String -> [String]
processLine maxWidth line
  -- If the line is a preprocessor directive, do not reflow it.
  | not (null line) && head line == '#' = [line]
  | otherwise = reflowParts maxWidth (splitParts line)

------------------------------------------------------------
-- We first split the line into segments, each tagged with whether it is inside a string literal.
-- The parser here is “naive” in that it toggles on each unescaped double-quote.
type Part = (Bool, String)  -- (True means inside a string literal, False means normal code)

splitParts :: String -> [Part]
splitParts = go False ""
  where
    go _ acc [] = [(False, reverse acc)]  -- if we end outside a string, return accumulated text (it might be empty)
    go inStr acc (c:cs)
      | c == '"' && not (isEscaped acc) =
          -- encountered an unescaped quote: finish current part and toggle mode.
          -- strip starting quote from the accumulated part.
          let quote_stripped_acc = reverse acc
              part = (inStr, quote_stripped_acc)
          in part : go (not inStr) [] cs  -- include the quote in the new part
      | otherwise = go inStr (c:acc) cs

    -- helper: a character is “escaped” if the preceding (accumulated) part ends with an odd number of backslashes.
    isEscaped :: String -> Bool
    isEscaped xs = odd (length (takeWhile (== '\\') xs))

------------------------------------------------------------
-- Given the line split into parts (each with its mode), reflow each part and then recombine.
-- When joining two parts of different mode, no extra break marker is needed.
reflowParts :: Int -> [Part] -> [String]
reflowParts maxWidth = concatMap (reflowPart maxWidth :: Part -> [String])


------------------------------------------------------------
-- Reflow one part.
-- If we are inside a string literal, use the string break strategy.
-- Otherwise, use the non-string (word based) break.
reflowPart :: Int -> Part -> [String]
reflowPart _ (_, "") = []
reflowPart maxWidth (True, s) = reflowString maxWidth s
reflowPart maxWidth (False, s) = reflowNonString maxWidth s

------------------------------------------------------------
-- Reflow a non-string section.
-- We break only at whitespace boundaries. When a break is inserted a '\' is appended.
reflowNonString :: Int -> String -> [String]
reflowNonString maxWidth s = go (words s) []
  where
    -- go munches through words and builds a list of lines.
    go :: [String] -> [String] -> [String]
    go [] [] = []
    go [] current = [unwords current]
    go (w:ws) [] = go ws [w]
    go (w:ws) current =
      let lineCandidate = unwords (current ++ [w])
      in if length lineCandidate <= maxWidth
            then go ws (current ++ [w])
            else (unwords current ++ "\\") : go (w:ws) []

-- Reflow a string literal.
-- Since the string part (from splitParts) does not include the enclosing quotes,
-- we always add an opening quote at the beginning and a closing quote at the end
-- of every fragment.
reflowString :: Int -> String -> [String]
reflowString maxWidth s =
  let fragments = reflowStringContent maxWidth s
  in map (\frag -> "\"" ++ frag ++ "\"") fragments

-- | Reflow the inner content of a string literal.
-- Break arbitrarily every maxWidth characters.
-- However, if the break point would occur immediately AFTER a backslash, 
-- then back off one character.
reflowStringContent :: Int -> String -> [String]
reflowStringContent maxWidth s = go s
  where
    go "" = []
    go cs =
      let (chunk, rest) = takeChunk maxWidth cs
      in chunk : go rest

-- | takeChunk extracts up to n characters from the input.
-- If the chunk has length exactly n and ends with a backslash,
-- then break one character earlier to avoid breaking immediately after a backslash.
takeChunk :: Int -> String -> (String, String)
takeChunk n xs =
  let chunk = take n xs
  in if length chunk == n && not (null chunk) && last chunk == '\\' && n > 1
       then (init chunk, drop (n-1) xs)
       else (chunk, drop (length chunk) xs)

