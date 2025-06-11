#include <stdio.h>

void bar(int num) {
    int* ptr = NULL;

    *ptr = num; 
}

void foo(int num) {
    bar(num);
}

int main() {
    foo(1);

    int num = 0;

    printf("num = %d\n", (++num) + (++num));

    return 0;
}
