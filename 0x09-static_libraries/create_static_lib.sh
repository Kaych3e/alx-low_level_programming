#!/bin/bash

# a script that creates a static library called liball.a
#from all the .c files in the current directory

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o
gcc -c ./*.c
ar -rc liball.a ./*.o
