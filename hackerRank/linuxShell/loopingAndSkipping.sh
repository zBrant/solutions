#!/bin/bash

n=1

while [ $n -lt 100 ]; do
    echo "$n"
    n=$((contador + 2))
done
