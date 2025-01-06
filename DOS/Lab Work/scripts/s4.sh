#!/bin/bash
echo "Enter Product Name:"
read item
echo "Enter the color variations:"
read color1 color2 color3
echo "The product name is $item."
echo "Available colors are $color1, $color2 and $color3."
#direct prompt:
read -p 'Do you want to buy? (y/n): ' choice
echo "LOL"
read -n 3 -p 'Enter your name: ' name
#using N will also take enter as character input

echo "\nlol your name is now $name"
