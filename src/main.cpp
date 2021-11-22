extern "C"
{
    // Add the header files required to run your main

#include "fib.h"
#include "sum.h"
#include "sumn.h"

#include <stdlib.h>
#include <stdio.h>
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{

    printf("%d", sumtail(2,0));

    printf(",");

    printf("%d", sumwhile(2));

    printf(",");

    printf("%d", fib(5,1,0));

    printf(",");

    printf("%d", sumn(3));

    return 0;
}