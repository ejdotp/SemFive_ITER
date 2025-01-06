#!/bin/bash
echo "Filename: $3"
echo -e "\nFirst $1 lines:"
echo "`head -$1 $3`"
echo -e "\nLast $2 lines:"
echo "`tail -$2 $3`"
echo -e "\nTotal no. of lines: `wc -l < $3`"
