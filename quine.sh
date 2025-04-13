#!/bin/bash
set -euo

clear
runhaskell generate_quine.hs quine.c 270 && gcc quine.pack.c -o a.out && ./a.out

while true; do
    clear;
    echo "==================== Iteration ===================="
    ./a.out | tee quine_staging.c
    gcc -Wno-incompatible-pointer-types quine_staging.c -o a.out
    sleep 0.3
done
