#!/bin/bash
set -euo

cd hMini; cabal run hMini ../quine.c 440; cd ..
gcc quine.pack.c

while true; do
    clear
    ./a.out | tee quine_staging.c
    gcc quine_staging.c
    sleep 0.05
done
