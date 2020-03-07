#!/bin/bash

sum=0

for i in "$@"
do 
  sum=$((sum+i))
done

arg_count="$#"

echo "$((sum/arg_count))"