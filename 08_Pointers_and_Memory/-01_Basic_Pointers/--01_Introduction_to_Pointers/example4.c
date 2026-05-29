/*
===========================================
Question 04:
Write a C program to access variable
value using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int x = 25;

    int *p = &x;

    printf("Value using Pointer = %d", *p);
}

/*
OUTPUT:
Value using Pointer = 25
*/