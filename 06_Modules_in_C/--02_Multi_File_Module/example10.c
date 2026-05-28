/*
===========================================
Question: 10
Write a C program to print Fibonacci series
using Multi File Module concept.
===========================================
*/

#include<stdio.h>

void fib()
{
    int n = 10, a = 0, b = 1, c, i;

    printf("%d %d ", a, b);

    for(i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

void main()
{
    fib();
}

/*
OUTPUT:
0 1 1 2 3 5 8 13 21 34
*/