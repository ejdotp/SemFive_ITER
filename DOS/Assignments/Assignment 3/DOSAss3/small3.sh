#!/bin/bash
if [ $# -ne 3 ]; then
	echo "Please provide exactly 3 no.s"
	exit 1
fi
smallest=$1
if [ $2 -lt $smallest ]; then
	smallest=$2
fi
if [ $3 -lt $smallest ]; then
	smallest=$3
fi
echo "Smallest = $smallest"
