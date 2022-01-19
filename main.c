#include <stdio.h>
#include "fib.h"

#define N 10

int main() {
    int a = N;
    printf("fib(%d) = %ld\n", a, fib(a));
    return 0;
}
