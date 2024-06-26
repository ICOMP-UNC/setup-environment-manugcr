#!/bin/bash -e

# Generate the reports:
#   - ctest_report.xml
#   - coverage.xml
#   - valgrind_report.xml

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

# echo ""
# echo "\t-> Get ctest_report.xml ..."
# ctest --output-junit ctest_report.xml

# echo ""
# echo "\t-> Get coverage.xml ..."
# gcovr -r .. . --cobertura-pretty --cobertura ./coverage.xml

# echo ""
# echo "\t-> Get valgrind_report.xml ..."
