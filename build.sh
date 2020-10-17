#!/bin/bash

folder="CourseApp/CourseApp"
output="a.out"

if [ $1 ]; then folder=$1; fi
if [ $2 ]; then output=$2; fi

files=$(echo $(ls $folder/*.cpp))

g++ $files -o $output && ./$output