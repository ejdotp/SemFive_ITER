#!/bin/bash
#Write a shell script faop to perform float arithmetic on two numbers, where the value of the two numbers will be given during runtime.

read -p "Enter first integer: " num1
read -p "Enter second integer: " num2

echo "Sum: $(echo "$num1 + $num2" | bc)"
echo "Diff: $(echo "$num1 - $num2" | bc)"
echo "Prod: $(echo "$num1 * $num2" | bc)"
echo "Div: $(echo "$num1 / $num2" | bc)"


