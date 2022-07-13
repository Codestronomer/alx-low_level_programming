#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o
ldconfig
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

