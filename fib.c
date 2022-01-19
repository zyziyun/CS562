#include "fib.h"

long fib(int n) {
//    if (n <= 2) {
//        return 1;
//    } else {
//        return fib(n - 1) + fib(n - 2);
//    }
    long result;
    long previous_result;
    long next_order_result;
    result = previous_result = 1;
    
    while (n > 2) {
        n -= 1;
        next_order_result = previous_result;
        previous_result = result;
        result = previous_result + next_order_result;
    }
    return result;
}
