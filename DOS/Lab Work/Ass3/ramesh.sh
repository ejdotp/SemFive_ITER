#!/bin/bash
#Write a shell script faop to perform float arithmetic on two numbers, where the value of the two numbers will be given during runtime.

read -p "Enter Basic Salary: " bsal
hallowance=$(echo "0.2 * $bsal" | bc)
dallowance=$(echo "0.4 * $bsal" | bc)
gross=$(echo $hallowance + $dallowance + $bsal | bc)
echo "House allowance: $hallowance"
echo "Dearness allowance: $dallowance"
echo "Gross Salary: $gross"


