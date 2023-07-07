#!/bin/bash
gcc -wall -wextra -werror -pendantic -C *.c
ar rc liball.a *.o
