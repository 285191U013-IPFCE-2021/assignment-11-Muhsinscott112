#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total)
{
  // pre-condition
  assert(n >= 1); // n cannot be less that 1
  int p = n - 1;

  // post-condition
  if (n == 1)
    return 1;
  else
    return n + sumtail(n - 1,total+n); // recursive tail
}

/* Sum integers 1 to n */
int sumwhile(int n)
{
  // pre-condition
  assert(n >= 1); // n cannot be less than 1

  // post-condition
  while (n == 1)
  {
    return 1;
  }
  return n + (sumwhile(n-1)); // recursive tail
}
