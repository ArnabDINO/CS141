#!/bin/sh
echo "Enter your name"
read NAME
mkdir $NAME
for x in 1 2 3 4 5
do
	touch ./$NAME/$NAME$x.cpp
done
echo "Thank you"
