#!/bin/bash

gcc -c -Wall -Werror -Wextra *
ar -rc liball.a *.o *.c
ranlib liball.a
