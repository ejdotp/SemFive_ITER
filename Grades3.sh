#!/bin/bash

# Input internal marks, attendance percentage, and external marks
read -p "Enter internal marks (0-20): " internal_marks
read -p "Enter attendance percentage (0-100): " attendance
read -p "Enter external marks (0-50): " external_marks

# Validate inputs
if ! [[ "$internal_marks" =~ ^[0-9]+$ ]] || [ "$internal_marks" -lt 0 ] || [ "$internal_marks" -gt 20 ]; then
    echo "Invalid internal marks. Please enter a value between 0 and 20."
    exit 1
fi

if ! [[ "$attendance" =~ ^[0-9]+$ ]] || [ "$attendance" -lt 0 ] || [ "$attendance" -gt 100 ]; then
    echo "Invalid attendance percentage. Please enter a value between 0 and 100."
    exit 1
fi

if ! [[ "$external_marks" =~ ^[0-9]+$ ]] || [ "$external_marks" -lt 0 ] || [ "$external_marks" -gt 50 ]; then
    echo "Invalid external marks. Please enter a value between 0 and 50."
    exit 1
fi

# Initialize a flag for eligibility
eligible=1

# Check conditions
if [ "$internal_marks" -lt 16 ]; then
    echo "Internal marks are insufficient."
    eligible=0
fi

if [ "$attendance" -lt 40 ]; then
    echo "Attendance percentage is insufficient."
    eligible=0
fi

if [ "$external_marks" -lt 24 ]; then
    echo "External marks are insufficient."
    eligible=0
fi

# Display the result
if [ "$eligible" -eq 1 ]; then
    echo "Allowed for Next Semester."
else
    echo "Not allowed for Next Semester."
fi
