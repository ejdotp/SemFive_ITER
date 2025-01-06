#!/bin/bash
echo "Enter a character:"
read -n 1 char
if [[ $char =~ [a-z] ]]; then
	echo "you entered a lowercase alphabet"
elif [[ $char =~ [A-Z] ]]; then
	echo "you entered a uppercase alphabet"
elif [[ $char =~ [0-9] ]]; then
	echo "you have entered a digit"
elif [[ ${#char} -ne 1 ]]; then
	echo "you have entered more than one character"
else
	echo "you entered a special symbol"
fi
