#!/bin/bash
#print prompt message
echo "Magic Trick!"
echo "I'll guess your favorite color ;)"
echo "Enter your favorite color: "
#take input
read
#print the input value (stored by default in $REPLY is no var specified after read)
echo "Your favorite color is $REPLY ;)"
