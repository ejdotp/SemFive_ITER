#!/bin/bash
echo "The first fruit is: $1"
echo "The second fruit is: $3"
echo "The third fruit is: $2"
echo "There are $# fruits: $@ss" 
#$@ prints all command line inputs
#$# counts no. of vars
#$1, $2... is used for command line arguments. Code is executed like:
#  "bash s5.sh apple pear orange"
