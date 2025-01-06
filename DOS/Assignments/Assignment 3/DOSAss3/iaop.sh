#!/bin/bash

read -p "Enter first integer: " num1
read -p "Enter second integer: " num2

add=`expr $num1 + $num2`
sub=`expr $num1 - $num2`
mul=`expr $num1 \* $num2`

if [ "$num2" -ne 0 ]; then
    div=`expr $num1 / $num2`
else
    div="undefined (division by zero)"
fi

echo "Results:"
echo "$num1 + $num2 = $add"
echo "$num1 - $num2 = $sub"
echo "$num1 * $num2 = $mul"
echo "$num1 / $num2 = $div"


