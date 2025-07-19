#!/bin/bash

# Script to run the main program
echo "Running the main program..."

# Check if the main binary exists
if [ ! -f build/main ]; then
    echo "Error: main binary not found. Please build the project first."
    exit 1
fi

# Run the main program
./build/main