/*
===========================================
Question: 09
Write a C program to find sum of digits
using Multi File Module concept.
===========================================
*/

#include<stdio.h>

void sum()
{
    int n = 123, s = 0;

    while(n > 0)
    {
        s = s + (n % 10);
        n = n / 10;
    }

    printf("Sum = %d", s);
}

void main()
{
    sum();
}

/*
OUTPUT:
Sum = 6
*/