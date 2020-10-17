#!/bin/bash

input="CourseApp/CourseApp/CourseApp.cpp"
output="a.out"

if [ $1 ]; then input=$1; fi
if [ $2 ]; then output=$2; fi

g++ $input -o $output && ./$output