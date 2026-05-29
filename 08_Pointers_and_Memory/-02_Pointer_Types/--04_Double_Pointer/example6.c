/*
===========================================
Question 06:
Write a C program demonstrating
double dereferencing.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 99;

    // Pointer declaration
    int *ptr = &num;

    // Double pointer declaration
    int **dptr = &ptr;

    // Display values
    printf("Using Pointer = %d\n", *ptr);

    printf("Using Double Pointer = %d", **dptr);
}

/*
OUTPUT:
Using Pointer = 99
Using Double Pointer = 99
*/