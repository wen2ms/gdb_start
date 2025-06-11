#include <stdio.h>
#include <unistd.h>

void bar() {
    for (int i = 0; i < 1000000; ++i) {
        printf("i = %d\n", i);

        sleep(1);
    }
}

void foo() {
    bar();
}

int main() {
    foo();

    return 0;
}