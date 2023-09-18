#!/bin/bash
gcc -shared -o myprintf.so -fPIC test.c
export LD_PRELOAD=/tmp/myprintf.so
