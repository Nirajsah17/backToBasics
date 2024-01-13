#!/bin/bash

g++ $1 -o run
./run
printf "\n "
rm run