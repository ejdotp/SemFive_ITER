#!/bin/bash
echo "Enter internal mark: "
read mark
echo "Enter attendance percentage: "
read atnd
if [ $mark -ge 20 ] && [ $atnd -ge 75 ]; then
	echo "Allowed for semester"
else
	echo "Not allowed"
fi
