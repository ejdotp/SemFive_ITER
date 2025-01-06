#!/bin/bash
if (( $# != 3 )); then
    echo "Invalid input"
    echo "Enter input in following format: op1 operator op2"
    exit 1
fi

op1=$1
operator=$2
op2=$3

case $operator in
    +) echo "$op1 + $op2 = $((op1 + op2))" ;;
    -) echo "$op1 - $op2 = $((op1 - op2))" ;;
    x) echo "$op1 * $op2 = $((op1 * op2))" ;;
    /) echo "$op1 / $op2 = $((op1 / op2))" ;;
    %) echo "$op1 % $op2 = $((op1 % op2))" ;;
    ^) echo "$op1 ^ $op2 = $((op1 ** op2))" ;;
    *) echo "Invalid operator" ;;
esac
