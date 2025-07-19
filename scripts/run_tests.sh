#!/bin/bash




# Script to run the tests
echo "Running the tests..."

# Check if the tests binary exists
if [ ! -f build/tests ]; then
    echo "Error: tests binary not found. Please build the project first."
    exit 1
fi

# Run the tests
./build/tests