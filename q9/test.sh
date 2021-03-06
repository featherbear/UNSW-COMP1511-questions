#!/usr/bin/env bash

res=0

gcc code.c -o code -std=c99
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;

echo 1 | ./code | diff - .exp1
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;

echo 52000 | ./code | diff - .exp52000
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;

echo 0 | ./code | diff - .exp0
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
