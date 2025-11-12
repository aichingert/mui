#!/bin/sh

set -e

g++ src/main.cpp -o uve

if test "$#" -ge 1 -a "$1" = "--run" ; then
    ./uve
fi
