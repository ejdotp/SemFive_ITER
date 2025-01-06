#!/bin/bash
if cmp -s "$1" "$2"; then
    echo "Files $1 and $2 have same content."
    rm "$2"
    echo "So $2 is deleted."
else
    echo "Files $1 and $2 have different content."
fi
