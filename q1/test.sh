#!/usr/bin/env bash

dcc >/dev/null 2>&1
if [ $? -ne 1 ]
then
  echo dcc was not found. Please do this question on the CSE computers
  shopt -s expand_aliases
  alias dcc=gcc
fi

res=0

dcc code.c -o code
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
