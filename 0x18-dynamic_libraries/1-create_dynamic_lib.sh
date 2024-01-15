#!/bin/bash
if gcc -Wall -Wextra -pedantic -c -fPIC *.c; then
    echo "Compilation successful."
else
    echo "Error: Compilation failed."
    exit 1
fi

if gcc -shared -o liball.so *.o; then
    echo "Library creation successful."
else
    echo "Error: Library creation failed."
    exit 1
fi

export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
echo "LD_LIBRARY_PATH updated: $LD_LIBRARY_PATH"
