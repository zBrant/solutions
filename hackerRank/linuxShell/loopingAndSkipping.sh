#!/bin/bash

contador=1

while [ $contador -lt 100 ]; do
    echo "$contador"
    contador=$((contador + 2))
done
