#!/bin/bash

read bool

if [ "$bool" = "Y" ] || [ "$bool" == "y" ]; then
    echo "YES"
else
    echo "NO"
fi