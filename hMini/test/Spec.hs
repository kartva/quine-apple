{-# LANGUAGE OverloadedStrings #-}

module Main where

import Minifier
import Test.Tasty
import Test.Tasty.HUnit
import qualified Data.Text as T

main :: IO ()
main = defaultMain tests

-- | Test cases
tests :: TestTree
tests = testGroup "C Minifier Tests"
  [ testCase "Strip tabs and newlines" $
      minifyC 80 "int\tmain()\n{\n\treturn 0;\n}" @?= Right "int main() {  return 0; }"

  , testCase "Preserve string with escapes" $
      minifyC 80 "char *s = \"hello\\nworld\";" @?= Right "char *s = \"hello\\nworld\";"

  , testCase "Break long string" $
      let longStr = "char *s = \"1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\";"
      in minifyC 80 (T.pack longStr) @?= Right "char *s = \"123456789012345678901234567890123456789012345678901234567890\"\n\"12345678901234567890123456789012345678901234567890123456789012345678901\"\n\"23456789012345678901234567890\";"

  , testCase "Don't break at escaped quote or backslash" $
      let str = "char *s = \"this is a \\\"quoted\\\" string that needs breaking eventually...\";"
      in case minifyC 50 (T.pack str) of
           Right res -> all (not . (`T.isSuffixOf` "\\")) (T.lines res) @? "No line ends in \\"
           Left err  -> assertFailure err
           
  , testCase "Preserve preprocessor lines" $
      let input = "#include <stdio.h>\nint main() { return 0; }"
      in minifyC 80 input @?= Right "#include <stdio.h>\nint main() { return 0; }"

  , testCase "Preserve macro definition" $
      let input = "#define FOO(x) ((x)*(x))\nint y = FOO(3);"
      in minifyC 80 input @?= Right "#define FOO(x) ((x)*(x))\nint y = FOO(3);"

  , testCase "Remove single-line comments" $
      let input = "int main() { // This is a comment\n    return 0; // Return value\n}"
      in minifyC 80 input @?= Right "int main() {  return 0; }"

  , testCase "Handle escaped quote in char literal" $
      minifyC 80 "if (c == '\"') { return true; }" @?= Right "if (c == '\"') { return true; }"

  , testCase "Never break inside character literal and break at word boundaries" $
      let longLine = "if (someFunction('x') && anotherFunction() && yetAnotherFunction() && evenMoreFunctions() && moreAndMore() && keepGoing() && almostThere() && finallyDone()) { doSomething(); }"
      in minifyC 40 longLine @?= Right "if (someFunction('x') &&\nanotherFunction() &&\nyetAnotherFunction() &&\nevenMoreFunctions() &&\nmoreAndMore() &&\nkeepGoing() &&\nalmostThere() &&\nfinallyDone()) { doSomething(); }"
  ]