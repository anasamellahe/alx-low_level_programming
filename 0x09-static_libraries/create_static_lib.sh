#!/bin/bash
rm -f *.a
gcc -c *.c
ar rc liball.a *.o
rm *.o

