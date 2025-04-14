#!/bin/bash
set -euo

while true; do
    clear
    ./a.out | tee quine_staging.c
    gcc quine_staging.c -o a.out
    sleep 0.05
done
