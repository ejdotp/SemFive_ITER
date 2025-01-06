#!/bin/bash
echo "Enter cost price: "
read cp
echo "Enter Selling price: "
read sp
if [ "$sp" -gt "$cp" ]; then
	profit=$((sp - cp))
	echo "Profit: $profit"
elif [ "$sp" -lt "$cp" ]; then
	loss=$((cp - sp))
	echo "Loss: $loss"
else
	echo "No Profit No Loss"
fi
