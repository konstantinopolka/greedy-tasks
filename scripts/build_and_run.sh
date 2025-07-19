#!/bin/bash


# Build the project
echo "Building the project..."
rm -rf build
mkdir build
cd build
cmake ..
cmake --build .
cd ..

# Run the main program
echo "Running the main program..."
if [ -f build/main ]; then
    ./build/main
else
    echo "Error: main binary not found."
fi

# Run the tests
echo "Running the tests..."
if [ -f build/tests ]; then
    ./build/tests
else
    echo "Error: tests binary not found."
fi