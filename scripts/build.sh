#!/bin/bash


# Script to build the project
echo "Building the project..."

# Remove and recreate the build directory
rm -rf build
mkdir build
cd build

# Run CMake configuration
cmake ..

# Build the project
cmake --build .

echo "Build completed successfully."