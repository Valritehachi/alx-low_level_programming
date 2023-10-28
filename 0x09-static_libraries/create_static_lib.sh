#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
rm main.o liball.a
ar -rc liball.a *.o
ranlib liball.a
