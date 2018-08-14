#!/bin/sh

echo "WHAT IS YOUR NAME"
read NAME
mkdir $NAME
touch ./$NAME/$NAME.cpp

