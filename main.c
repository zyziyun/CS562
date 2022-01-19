#include <stdio.h>
#include "fib.h"

#define N 10

int main(int argc, const char * argv[]) {
    int a = N;
    printf("fib(%d) = %ld\n", a, fib(a));
}
