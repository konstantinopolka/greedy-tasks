#!/bin/bash

# filepath: /home/sotnikov/projects/greedy/scripts/build_main.sh

# Script to build only the main program
echo "Building the main program..."

# Remove only the main binary if it exists
if [ -f build/main ]; then
    echo "Removing old main binary..."
    rm build/main
fi

# Ensure the build directory exists
mkdir -p build
cd build

# Run CMake configuration (only if not already configured)
if [ ! -f CMakeCache.txt ]; then
    cmake ..
fi

# Build only the main target
cmake --build . --target main

echo "Main program build completed successfully."