#!/bin/bash

gcc -c -Wall -Werror -Wextra *
ar -rc liball.a *
ranlib liball.a
