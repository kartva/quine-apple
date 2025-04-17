{-# LANGUAGE OverloadedStrings #-}

module Main where

import Minifier (minifyC)
import System.Environment (getArgs)

-- | Derive output filename by adding '.min.c' to the base name
deriveOutputFileName :: String -> String
deriveOutputFileName inputFile =
  let (_, rname) = break (== '.') (reverse inputFile)
  in reverse rname ++ "min.c"

-- | Main program logic
processFile :: FilePath -> Int -> IO ()
processFile inputFile maxWidth = do
  putStrLn $ "Reading from " ++ inputFile
  putStrLn $ "Max width for wrapping: " ++ show maxWidth
  contents <- readFile inputFile
  let outputFile = deriveOutputFileName inputFile
      minified = minifyC maxWidth contents
  do
    writeFile outputFile minified
    putStrLn $ "Minified code written to " ++ outputFile

main :: IO ()
main = do
  args <- getArgs
  case args of
    [inputFile, maxWidthStr] -> do
      let maxWidth = read maxWidthStr :: Int
      processFile inputFile maxWidth
    _ -> putStrLn "Usage: hMini <inputFile> <maxWidth>"
