#include <iostream>
#include "fibonacci.h"

long Fibonacci::calc_fibonacci(const int num) {
    int first = 1;
    int second = 1;
    int fib_num = 1;
    while (fib_num < num) {
        second += first;
        first = second - first;
        fib_num++;
    }
    return first;
}

short Fibonacci::last_dig_fib(const int num) {
    int first = 1;
    int second = 1;
    int fib_num = 1;
    while (fib_num < num) {
        second += first;
        first = second - first;
        fib_num++;
        first %= 10;
    }
    return first;
}

int Fibonacci::get_div_from_fib(const int num, const int div) {
    int first = 1;
    int second = 1;
    int fib_num = 1;
    int res = 0;
    while (fib_num < num) {
        second += first;
        first = second - first;
        fib_num++;
        first %= 10;
        res = first / div;
    }
    return res;
}