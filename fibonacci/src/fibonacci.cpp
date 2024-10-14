#include <fibonacci.h>

int fibonacci(int index)
{
   if (index < 0) return 0;

   if (index < 2) return index;

   return fibonacci(index - 1) + fibonacci(index - 2);
}