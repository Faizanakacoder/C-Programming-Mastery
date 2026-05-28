/*
===========================================
Question: 05
Write a C program to check even or odd
using Header File Module concept.
===========================================
*/

#include<stdio.h>

void check()
{
    int n = 7;

    if(n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

void main()
{
    check();
}

/*
OUTPUT:
Odd Number
*/