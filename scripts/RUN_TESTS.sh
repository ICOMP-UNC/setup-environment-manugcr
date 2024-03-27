#!/bin/bash -e

echo ""

# Search for the build directory and remove it if it exists
if [ -d "./build" ]; then
    echo "  -> Removing old build directory..."
    rm -rf ./build/*
else
    echo "  -> Creating build directory..."
    mkdir ./build
fi

echo "  -> Compiling and building project..."
echo ""
cd ./build && cmake -GNinja -DRUN_TEST=1 .. && ninja

echo ""
echo "  -> Running tests..."
echo ""
ctest --test-dir tests/ -VV
