#ifndef FIBONACCI_H
#define FIBONACCI_H

using namespace std;

class Fibonacci {
public:
    static long calc_fibonacci(int num);
    static short last_dig_fib(int num);
    static int get_div_from_fib(int num, int div);
};

#endif //FIBONACCI_H
