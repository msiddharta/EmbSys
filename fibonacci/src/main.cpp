#include <fibonacci.h>
#include <iostream>
#include <iomanip>

int main()
{
    for(int i = 0; i < 20; i++){
        std::cout << "Fib(" << std::setw(4) << i << ") = " << fibonacci(i) << std::endl;

        std::cout << "Fib(" << std::setw(4) << i << ") = " << fibonacci_tail(i) << std::endl;
        
        std::cout << "Fib(" << std::setw(4) << i << ") = " << fibonacci_loop(i) << std::endl;
    }

    return 0;
}