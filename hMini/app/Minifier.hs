{-# LANGUAGE OverloadedStrings #-}

module Minifier 
  ( minifyC
  ) where

import Data.Text (Text)
import qualified Data.Text as T
import Data.Char (isSpace)
import Data.List (foldl')

-- | Minifies C code while preserving semantics
-- The first parameter is the column width for line breaking
minifyC :: Int -> Text -> Either String Text
minifyC maxWidth code = 
  Right $ minifyAndWrap maxWidth code

-- | Process the entire code
minifyAndWrap :: Int -> Text -> Text
minifyAndWrap maxWidth input =
  let lines = T.lines input
      processedLines = map processLine lines
      combined = combinePP processedLines
      wrapped = wrapLongStrings maxWidth combined
  in wrapped

-- | Process a single line of code
processLine :: Text -> Text
processLine line
  | T.null line = ""
  | "#" `T.isPrefixOf` T.stripStart line = line  -- Preserve preprocessor directives as-is
  | otherwise = T.stripEnd $ compressWhitespace $ stripComments line  -- Strip trailing spaces

-- | Strip single-line comments from code
stripComments :: Text -> Text
stripComments = go False False ""
  where
    go :: Bool -> Bool -> Text -> Text -> Text
    go _ _ acc "" = acc
    go inStr inChar acc t =
      let c = T.head t
          rest = T.tail t
      in case (inStr, inChar, c) of
          -- String handling
          (False, False, '"') -> go True False (acc <> "\"") rest
          (True, False, '"') -> go False False (acc <> "\"") rest
          (True, _, '\\') -> 
            if T.null rest 
              then acc <> "\\"
              else go True False (acc <> "\\" <> T.singleton (T.head rest)) (T.tail rest)
          
          -- Character handling  
          (False, False, '\'') -> go False True (acc <> "'") rest
          (False, True, '\\') ->  -- Handle escape in char literal
            if T.null rest
              then acc <> "\\"
              else go False True (acc <> "\\" <> T.singleton (T.head rest)) (T.tail rest)
          (False, True, '\'') -> go False False (acc <> "'") rest

          -- Comment detection
          (False, False, '/') ->
            if not (T.null rest) && T.head rest == '/'
              then T.stripEnd acc
              else go False False (acc <> "/") rest
          
          -- In string or char literal, preserve exactly
          (True, _, _) -> go True False (acc <> T.singleton c) rest
          (_, True, _) -> go False True (acc <> T.singleton c) rest
          
          -- Normal character
          (False, False, _) -> go False False (acc <> T.singleton c) rest

-- | Compress whitespace in code (not strings/chars)
compressWhitespace :: Text -> Text
compressWhitespace = go False False ""
  where
    go :: Bool -> Bool -> Text -> Text -> Text
    go _ _ acc "" = acc
    go inStr inChar acc t =
      let c = T.head t
          rest = T.tail t
      in case (inStr, inChar, c) of
          -- String handling
          (False, False, '"') -> go True False (acc <> "\"") rest
          (True, False, '"') -> go False False (acc <> "\"") rest
          (True, _, '\\') -> 
            if T.null rest 
              then acc <> "\\"
              else go True False (acc <> "\\" <> T.singleton (T.head rest)) (T.tail rest)
          
          -- Character handling  
          (False, False, '\'') -> go False True (acc <> "'") rest
          (False, True, '\\') ->  -- Handle escape in char literal
            if T.null rest
              then acc <> "\\"
              else go False True (acc <> "\\" <> T.singleton (T.head rest)) (T.tail rest)
          (False, True, '\'') -> go False False (acc <> "'") rest
          
          -- In string or char literal, preserve exactly
          (True, _, _) -> go True False (acc <> T.singleton c) rest
          (_, True, _) -> go False True (acc <> T.singleton c) rest
          
          -- Handle whitespace in code
          (False, False, c') | isSpace c' -> 
            let nextNonWhitespace = T.dropWhile isSpace rest
            in if T.null nextNonWhitespace || not (isSpace (T.head nextNonWhitespace))
                then go False False (acc <> " ") nextNonWhitespace
                else go False False acc nextNonWhitespace
          
          -- Regular character in code
          (False, False, _) -> go False False (acc <> T.singleton c) rest

-- | Combine processed lines preserving preprocessor directives
combinePP :: [Text] -> Text
combinePP [] = ""
combinePP [x] = x
combinePP (x:y:xs)
  | "#" `T.isPrefixOf` T.stripStart x = x <> "\n" <> combinePP (y:xs)
  | "#" `T.isPrefixOf` T.stripStart y = x <> " " <> combinePP (y:xs)
  | otherwise = x <> " " <> combinePP (y:xs)

-- | Wrap long strings to fit within maxWidth
wrapLongStrings :: Int -> Text -> Text
wrapLongStrings maxWidth = go 0 False False 0 ""
  where
    go _ _ _ _ acc "" = acc
    go col inStr inChar parenDepth acc t =
      let c = T.head t
          rest = T.tail t
      in case (inStr, inChar, c) of
          -- Enter string
          (False, False, '"') -> 
            go (col + 1) True False parenDepth (acc <> "\"") rest
          
          -- Exit string 
          (True, False, '"') ->
            let afterQuote = acc <> "\""
            in if "#" `T.isPrefixOf` T.stripStart rest
                 then go 0 False False parenDepth (afterQuote <> "\n") rest
                 else go (col + 1) False False parenDepth afterQuote rest

          -- Enter character literal  
          (False, False, '\'') -> 
            go (col + 1) False True parenDepth (acc <> "'") rest

          -- Exit character literal
          (False, True, '\'') -> 
            go (col + 1) False False parenDepth (acc <> "'") rest
          
          -- Handle escape in string
          (True, _, '\\') ->
            if T.null rest 
              then acc <> "\\"
              else go (col + 2) inStr inChar parenDepth (acc <> "\\" <> T.singleton (T.head rest)) (T.tail rest)
              
          -- Handle escape in char literal  
          (False, True, '\\') ->
            if T.null rest 
              then acc <> "\\"
              else go (col + 2) inStr inChar parenDepth (acc <> "\\" <> T.singleton (T.head rest)) (T.tail rest)
          
          -- Track parentheses depth
          (False, False, '(') ->
            go (col + 1) False False (parenDepth + 1) (acc <> "(") rest
            
          (False, False, ')') ->
            go (col + 1) False False (max 0 (parenDepth - 1)) (acc <> ")") rest
          
          -- Break at && operator when not inside parentheses
          (False, False, '&') | parenDepth == 0 ->
            if not (T.null rest) && T.head rest == '&'
              then let afterAmp = T.tail rest
                       skipSpace = T.dropWhile isSpace afterAmp
                   in go 1 False False parenDepth (acc <> " &&\n") skipSpace
              else go (col + 1) False False parenDepth (acc <> "&") rest
            
          -- String content that would exceed maxWidth
          (True, False, _) | col > maxWidth - 10 && col > 40 -> 
            go 1 True False parenDepth (acc <> "\"\n\"" <> T.singleton c) rest
          
          -- Regular character in string or char literal
          (True, _, _) -> go (col + 1) True False parenDepth (acc <> T.singleton c) rest
          (_, True, _) -> go (col + 1) False True parenDepth (acc <> T.singleton c) rest

          -- Break long line at operator boundaries when not in parentheses
          (False, False, _) | col > maxWidth && parenDepth == 0 ->
            if c == ' ' || (not (T.null rest) && T.head rest == ' ')
              then go 1 False False parenDepth (acc <> "\n" <> T.singleton c) rest
              else go (col + 1) False False parenDepth (acc <> T.singleton c) rest
            
          -- Regular character
          (False, False, _) ->
            go (col + 1) False False parenDepth (acc <> T.singleton c) rest