#!/bin/sh

set -e

g++                                             \
    -I$HOME/ext/glfw/include                    \
    -I$HOME/ext/volk/                           \
    -I$HOME/ext/VulkanMemoryAllocator/include   \
    src/main.cpp -o uve                         \
    -L$HOME/ext/glfw/build/src -l:libglfw3.a

if test "$#" -ge 1 -a "$1" = "--run" ; then
    ./uve
fi
