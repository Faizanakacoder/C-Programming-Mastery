/*
===========================================
Question 01:
Write a C program to declare
a double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 10;

    // Pointer declaration
    int *ptr = &num;

    // Double pointer declaration
    int **dptr = &ptr;

    // Display value
    printf("Value = %d", **dptr);
}

/*
OUTPUT:
Value = 10
*/