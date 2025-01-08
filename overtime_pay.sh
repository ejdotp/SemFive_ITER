#!/bin/bash

# Initialize overtime rate and total employees
overtime_rate=12
total_employees=10

echo "Enter the hours worked by $total_employees employees:"

# Loop to calculate overtime pay for each employee
for ((i=1; i<=total_employees; i++))
do
    read -p "Employee $i hours worked: " hours_worked

    # Validate input (should be a positive integer)
    if ! [[ "$hours_worked" =~ ^[0-9]+$ ]] || [ "$hours_worked" -lt 0 ]; then
        echo "Invalid input for Employee $i. Please enter a positive integer."
        continue
    fi

    # Calculate overtime pay if hours worked exceed 40
    if [ "$hours_worked" -gt 40 ]; then
        overtime_hours=$((hours_worked - 40))
        overtime_pay=$((overtime_hours * overtime_rate))
        echo "Employee $i overtime pay: Rs. $overtime_pay"
    else
        echo "Employee $i has no overtime pay."
    fi
done
