#!/bin/bash

ulimit -a

ulimit -c unlimited

gcc -g foo.c

ulimit -a

./a.out

gdb -x core_debug.txt a.out core

rm core