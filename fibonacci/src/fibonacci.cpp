#include <fibonacci.h>

int fibonacci(int index)
{
   if (index < 0) return 0;

   if (index < 2) return index;

   return fibonacci(index - 1) + fibonacci(index - 2);
}

int fibonacci_tail(int index, int next, int current)
{
    if (index <= 0 ) return current;

    return fibonacci_tail(index - 1, current + next, next);
}

int fibonacci_tail(int index)
{
    return fibonacci_tail(index, 1, 0);
}