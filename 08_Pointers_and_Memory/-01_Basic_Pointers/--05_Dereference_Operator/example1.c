/*
===========================================
Question 01:
Write a C program to access value
using dereference operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 10;

    // Pointer initialization
    int *p = &x;

    // Access value using dereference operator
    printf("Value using Pointer = %d", *p);
}

/*
OUTPUT:
Value using Pointer = 10
*/