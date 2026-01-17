#!/bin/sh

set -e

g++                                             \
    -std=c++23                                  \
    -o mui                                      \
    -I$HOME/ext/glfw/include                    \
    -I$HOME/ext/volk/                           \
    -I$HOME/ext/VulkanMemoryAllocator/include   \
    -L$HOME/ext/glfw/build/src -l:libglfw3.a    \
    src/ttf.hpp                                 \
    src/ttf.cpp                                 \
    src/mui.cpp                                 

if test "$#" -ge 1 -a "$1" = "--run" ; then
    ./mui
fi
