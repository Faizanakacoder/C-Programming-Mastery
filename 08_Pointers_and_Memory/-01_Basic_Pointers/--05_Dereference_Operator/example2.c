/*
===========================================
Question 02:
Write a C program to display value
using dereference operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 50;

    // Pointer initialization
    int *ptr = &num;

    // Display dereferenced value
    printf("Dereferenced Value = %d", *ptr);
}

/*
OUTPUT:
Dereferenced Value = 50
*/