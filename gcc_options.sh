#/bin/bash

# -E: Expand macros
gcc -E foo.c

# -S: Assembly
gcc -S foo.c

# -c: complie only
gcc -c foo.c

# -l: link library
gcc -c foo.c -lpthread

# -L: Library path
gcc foo.c -L .

# -I: Include path
gcc foo.c -I ../

# -g: Debug for gdb
gcc foo.c -g

# -O: Optimize
gcc foo.c -O3

# -o: output
gcc foo.c -o foo.out

# -Wall: Warn all
gcc foo.c -Wall

# -D: Define macro
gcc foo.c -DDEBUG
gcc foo.c -DPI=3.14