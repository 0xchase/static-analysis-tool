#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int fib()
{
  int n = 30, first = 0, second = 1, next, c;
 
  printf("First %d terms of Fibonacci series are:\n", n);
 
  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
 
  return 0;
}


int main() {
  fib();
}
