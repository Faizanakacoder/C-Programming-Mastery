/*
===========================================
Question: 08
Write a C program to reverse a number
using Multi File Module concept.
===========================================
*/

#include<stdio.h>

void reverse()
{
    int n = 123, rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("Reverse = %d", rev);
}

void main()
{
    reverse();
}

/*
OUTPUT:
Reverse = 321
*/