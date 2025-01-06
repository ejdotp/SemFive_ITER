#!/bin/bash
#Making a file-based decision
echo "Enter Filename:"
read filename

if [ -e $filename ]
then
	echo -e "file already exists:\n---------------------------"
	cat $filename
	echo -e "\n---------------------------"
else
	echo "File no existo, creating..."
	cat > $filename
	echo "File Created"
fi

#multiline comment:
<<com
.
.
.
com
