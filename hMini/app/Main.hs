{-# LANGUAGE OverloadedStrings #-}

module Main where

import Minifier (minifyC)
import System.Environment (getArgs)

-- | Derive output filename by adding '.pack.c' to the base name
deriveOutputFileName :: String -> String
deriveOutputFileName inputFile =
  let (_, rname) = break (== '.') (reverse inputFile)
  in reverse rname ++ "pack.c"

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
      let formattedTemplate = minifyC maxWidth template
      putStrLn $ "Template code (formatted):\n" ++ formattedTemplate
      let generatedCode = generateQuine formattedTemplate
      putStrLn $ "Generated code:\n" ++ generatedCode
      let formattedCode = minifyC maxWidth generatedCode
      putStrLn $ "Formatted code:\n" ++ formattedCode
      writeFile outputFile formattedCode
      putStrLn $ "Generated quine-like program written to " ++ outputFile
    _ -> putStrLn "Usage: hMini <templateFile> <maxWidth>"