#!/bin/bash

a=1
for (( i=0; i<5; i++ ))
do
        for (( j=4; j>= i; j-- ))
        do
        echo -n " "
        done

        for (( k=0; k<a; k++ ))
        do
        echo -n "*"
        done
a=$a+2
echo

done

