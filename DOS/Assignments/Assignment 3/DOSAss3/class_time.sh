#!/bin/bash
echo "Enter a day:"
read day
case "$day" in
    "Monday") echo "Class time: 10:00 AM - Room 101" ;;
    "Wednesday") echo "Class time: 1:00 PM - Room 202" ;;
    "Friday") echo "Class time: 3:00 PM - Room 303" ;;
    "Sunday") echo "Holiday" ;;
    *) echo "No class on $day" ;;
esac
