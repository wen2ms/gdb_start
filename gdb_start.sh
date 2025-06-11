#!/bin/bash

gcc -g cp_function.c

gdb -x gdb_cmds.txt a.out

rm copy.c