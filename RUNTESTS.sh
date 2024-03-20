#!/bin/bash -e

echo ""

if [ -d "./build" ]; then
    echo ""
    echo "-> Removing old build directory..."
    rm -rf ./build/*
else
    echo "" 
    echo "-> Creating build directory..."
    mkdir build
fi

echo "-> Compiling and building project..."
cd build && cmake -GNinja -DRUN_COVERAGE=1 .. && ninja
# cd build && cmake -GNinja -DRUN_TEST=1 .. && ninja

echo "-> Running tests..."
echo ""
ctest --test-dir tests/ -VV

echo ""
echo "-> Testing coverage"
gcovr -r /home/manu/Desktop/setup-environment-manugcr