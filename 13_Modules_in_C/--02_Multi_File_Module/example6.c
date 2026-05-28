/*
===========================================
Question: 06
Write a C program to find factorial
using Multi File Module concept.
===========================================
*/

#include<stdio.h>

void fact()
{
    int n = 5, i, f = 1;

    for(i = 1; i <= n; i++)
        f = f * i;

    printf("Factorial = %d", f);
}

void main()
{
    fact();
}

/*
OUTPUT:
Factorial = 120
*/