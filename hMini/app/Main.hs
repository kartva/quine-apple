{-# LANGUAGE OverloadedStrings #-}

module Main where

import Minifier
import qualified Data.Text as T
import System.Environment (getArgs)
import System.IO (readFile, writeFile)

-- | Derive output filename by adding '.min.c' to the base name
deriveOutputFileName :: String -> String
deriveOutputFileName inputFile =
  let (name, _) = break (== '.') inputFile
  in name ++ ".min.c"

-- | Main program logic
processFile :: FilePath -> Int -> IO ()
processFile inputFile maxWidth = do
  putStrLn $ "Reading from " ++ inputFile
  putStrLn $ "Max width for wrapping: " ++ show maxWidth
  contents <- readFile inputFile
  let outputFile = deriveOutputFileName inputFile
  case minifyC maxWidth (T.pack contents) of
    Right minified -> do
      writeFile outputFile (T.unpack minified)
      putStrLn $ "Minified code written to " ++ outputFile
    Left err -> putStrLn $ "Error: " ++ err

main :: IO ()
main = do
  args <- getArgs
  case args of
    [inputFile, maxWidthStr] -> do
      let maxWidth = read maxWidthStr :: Int
      processFile inputFile maxWidth
    _ -> putStrLn "Usage: hMini <inputFile> <maxWidth>"
