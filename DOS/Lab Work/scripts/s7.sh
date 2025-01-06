#!/bin/bash
#conditonal statements:
#if-fi
Name="Aayush"
if [ "$Name" = "Aayush" ]; then
	echo "His name is Aayush. It is true."
fi

#if-else-fi
age=17
if [ "$age" -ge 18 ]; then
	echo "You can vote."
else
	echo "You cannot vote."
fi
<<or 
   if(("$age">=18)) #not in syllabus
   then
   	echo "You can vote."
   else
   	echo "You cannot vote."
   fi
or

#if-elif-else-fi
if [ "$age" -ge 18 ]; then
	echo "You can vote."
elif [ "$age" -eq 17 ]; then
	echo "You can vote after 1 year."
else
	echo "You cannot vote."
fi

#nested if-else
echo "Enter subject"
read subject
if [ $subject == 'Linux' ]
then
echo "Enter Marks"
read marks
	if [ $marks -ge 30 ]
	then
	echo "You passed"
	else
	echo "you failed"
	fi
else
echo "Wrong Subject"
fi

#multiline comment:
<<com
-gt : greather than
-lt : less than
-eq : equals
-ne : not equalto
-ge : greater than equalto
-le : less than equalto
com
