#!/bin/bash -e

echo ""

# Execute clang-format
echo "\t-> Executing clang-format..."
clang-format -style=Microsoft -i ../include/*
clang-format -style=Microsoft -i ../src/*
clang-format -style=Microsoft -i ../lib/libdyn/include/*
clang-format -style=Microsoft -i ../lib/libdyn/src/*
clang-format -style=Microsoft -i ../lib/libsta/include/*
clang-format -style=Microsoft -i ../lib/libsta/src/*

# Search for the build directory and remove it if it exists
if [ -d "../build" ]; then
    echo "\t-> Removing old build directory..."
    rm -rf ../build/*
else
    echo "\t-> Creating build directory..."
    mkdir ../build
fi

echo "\t-> Compiling project and building..."
echo ""
cd ../build && cmake -GNinja .. && ninja

echo ""
echo "\t-> Running project..."
echo ""
./CMakeProjectTemplate
