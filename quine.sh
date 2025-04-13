#!/bin/bash

clear
runhaskell generate_quine.hs quine.c 80 && gcc quine.pack.c -o a.out && ./a.out

while true; do
    echo "==================== Iteration ===================="
    ./a.out | tee quine_staging.c
    gcc -Wno-incompatible-pointer-types quine_staging.c -o a.out
    sleep 1
done
