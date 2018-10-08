#!/usr/bin/env bash

res=0

gcc code.c -o code -std=c99
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;


./code | diff - .exp
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;

echo
echo
if [ $res -eq 0 ]
then
  echo All tests passsed!
else
  echo Not all tests passed!
fi
