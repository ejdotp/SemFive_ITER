#!/bin/bash

# Check if a number is provided
if [ -z "$1" ]; then
    echo "Usage: $0 <number>"
    exit 1
fi

# Get the number from the first argument
num=$1

# Validate input (must be a non-negative integer)
if ! [[ "$num" =~ ^[0-9]+$ ]]; then
    echo "Invalid input. Please enter a non-negative integer."
    exit 1
fi

# Initialize factorial to 1
factorial=1

# Calculate factorial using a while loop
while [ "$num" -gt 1 ]; do
    factorial=$((factorial * num))
    num=$((num - 1))
done

# Output the factorial
echo "Factorial: $factorial"
