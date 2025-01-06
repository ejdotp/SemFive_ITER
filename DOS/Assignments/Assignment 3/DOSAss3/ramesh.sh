#!/bin/bash

read -p "Enter Basic Salary: " bsal
hallowance=$(echo "0.2 * $bsal" | bc)
dallowance=$(echo "0.4 * $bsal" | bc)
gross=$(echo $hallowance + $dallowance + $bsal | bc)
echo "House allowance: $hallowance"
echo "Dearness allowance: $dallowance"
echo "Gross Salary: $gross"


