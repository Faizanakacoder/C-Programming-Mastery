/*
===========================================
Question: 01
Write a C program to demonstrate static
counter using function calls.
===========================================
*/

#include<stdio.h>

void counter()
{
    static int count = 0;
    count++;

    printf("Count = %d\n", count);
}

void main()
{
    counter();
    counter();
    counter();
}

/*
OUTPUT:
Count = 1
Count = 2
Count = 3
*/