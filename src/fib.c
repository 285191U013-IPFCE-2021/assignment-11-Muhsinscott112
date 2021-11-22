/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
// pre-condition
  assert(n >= 1); // n cannot be less than 1
  // p = 1 and pp = 0
  
  // post-condition
  if (n == 1)
    return p;
return fib(n-1,pp + p, p);
}
