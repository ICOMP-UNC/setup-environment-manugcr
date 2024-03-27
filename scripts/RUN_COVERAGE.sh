#!/bin/bash -e

echo ""

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
cd ../build && cmake -GNinja -DRUN_COVERAGE=1 .. && ninja

echo ""
echo "\t-> Running coverage test..."
echo ""
ctest --test-dir tests/ -VV
cd .. && gcovr -r "/$PWD"
