#!/usr/bin/env bash

res=0

gcc code.c -o code -std=c99
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;


echo 0 | ./code | diff - .exp0
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;

echo 200 | ./code | diff - .exp200
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;

echo -2 | ./code | diff - .exp-2
if [ $? -ne 0 ]
then
  res=$((res+1))
fi;

echo 999 | ./code | diff - .exp999
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
