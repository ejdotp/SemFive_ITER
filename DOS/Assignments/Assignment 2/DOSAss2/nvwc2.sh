#!/bin/bash
echo -e "Filename\tlinecount\t wordcount\tcharcount"
echo -e "$1\t\t`wc -l < $1`\t\t`wc -w < $1`\t\t`wc -c < $1`"
