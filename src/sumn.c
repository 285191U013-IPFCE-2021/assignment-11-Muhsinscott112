#include "sumn.h"

#include <stdio.h>
#include <assert.h>

int sumn(int n)
{

// pre-condition
assert(n >= 1); 

// postcondition 
    if (n == 1)
        return 1; // base case: 2 * 1 - 1 = 1
    else
        return (2 * n - 1) + sumn(n - 1); // recursive step/ inductive step - sum of first n positive odd numbers
}
