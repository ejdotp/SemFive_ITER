#!/bin/bash

# Check if marks are provided
if [ -z "$1" ]; then
    echo "Usage: $0 <marks>"
    exit 1
fi

# Get marks from the first argument
marks=$1

# Validate marks input
if ! [[ "$marks" =~ ^[0-9]+$ ]] || [ "$marks" -lt 0 ] || [ "$marks" -gt 100 ]; then
    echo "Invalid marks. Please enter a value between 0 and 100."
    exit 1
fi

# Determine grade
if [ "$marks" -ge 90 ]; then
    grade="A"
elif [ "$marks" -ge 80 ]; then
    grade="B"
elif [ "$marks" -ge 70 ]; then
    grade="C"
elif [ "$marks" -ge 60 ]; then
    grade="D"
else
    grade="F"
fi

# Output the grade
echo "Marks: $marks, Grade: $grade"
