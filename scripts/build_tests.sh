#!/bin/bash

# filepath: /home/sotnikov/projects/greedy/scripts/build_tests.sh

# Script to build only the tests
echo "Building the tests..."

# Remove only the tests binary if it exists
if [ -f build/tests ]; then
    echo "Removing old tests binary..."
    rm build/tests
fi

# Ensure the build directory exists
mkdir -p build
cd build

# Run CMake configuration (only if not already configured)
if [ ! -f CMakeCache.txt ]; then
    cmake ..
fi

# Build only the tests target
cmake --build . --target tests

echo "Tests build completed successfully."