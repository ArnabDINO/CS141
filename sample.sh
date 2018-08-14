#!/bin/sh
echo "Enter your name or else I will send a contract killer... :-)"
read NAME
mkdir $NAME
for x in 1 2 3 4 5
do
	touch ./$NAME/$NAME$x.cpp
done
echo "$NAME That's it?"
echo "Ha Ha Ha, now I know your name."
