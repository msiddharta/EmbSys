#include <fibonacci.h>
#include <iostream>

int main()
{
    for(int i = 0; i < 20; i++){
        std::cout << "Fib(" << i << ") = " << fibonacci(i) << std::endl;

        std::cout << "Fib(" << i << ") = " << fibonacci_tail(i) << std::endl;
    }

    return 0;
}