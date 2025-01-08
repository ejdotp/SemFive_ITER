#!/bin/bash

# Input
echo "Enter marks for 5 subjects:"

read -p "Subject 1: " sub1
read -p "Subject 2: " sub2
read -p "Subject 3: " sub3
read -p "Subject 4: " sub4
read -p "Subject 5: " sub5

# Validate inputs (ensure all are integers and within 0-100)
for marks in $sub1 $sub2 $sub3 $sub4 $sub5; do
    if ! [[ "$marks" =~ ^[0-9]+$ ]] || [ "$marks" -lt 0 ] || [ "$marks" -gt 100 ]; then
        echo "Invalid marks: $marks. Please enter integers between 0 and 100."
        exit 1
    fi
done

total=$((sub1 + sub2 + sub3 + sub4 + sub5))
percentage=$((total / 5))

# Determine division
if [ "$percentage" -ge 60 ]; then
    division="First Division"
elif [ "$percentage" -ge 50 ]; then
    division="Second Division"
elif [ "$percentage" -ge 40 ]; then
    division="Third Division"
else
    division="Fail"
fi

# Output
echo
echo "Total Marks: $total"
echo "Percentage: $percentage%"
echo "Division: $division"
