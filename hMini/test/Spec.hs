{-# LANGUAGE OverloadedStrings #-}

module Main where

import Minifier
import Test.Tasty
import Test.Tasty.HUnit

main :: IO ()
main = defaultMain tests

tests :: TestTree
tests = testGroup "C Minifier Tests"
  [ testCase "Minify simple C code" $
      let input = unlines
            [ "int main() { // main function"
            , "  printf(\"Hello, world!\\n\"); /* print greeting */"
            , "  return 0;"
            , "}"
            ]
          result = minifyC 40 input
          expected = unlines
            [ "int main(){printf(\"Hello, world!\\n\"); \\"
            , "return 0;}"
            ]
      in result @?= expected
  , testCase "Preprocessor directive" $
      let input = unlines
            [ "#include <stdio.h>"
            , "int main(){return 0;}"
            ]
          result = minifyC 40 input
          expected = unlines
            [ "#include <stdio.h>"
            , "int main(){return 0;}"
            ]
      in result @?= expected
  , testCase "String breaking with escapes" $
      let input = unlines
            [ "const char *s = \"Line1\\nLine2\\tEnd\";"
            ]
          result = minifyC 20 input
          expected = unlines
            [ "const char*s=\"Line1\""
            , "\"\\nLine2\\tEnd\";"
            ]
      in result @?= expected
  ]

-- const char*s=\"Line1\\nLine\"