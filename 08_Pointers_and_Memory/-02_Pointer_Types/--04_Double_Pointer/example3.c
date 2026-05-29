/*
===========================================
Question 03:
Write a C program to access
value using double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int value = 100;

    // Pointer declaration
    int *ptr = &value;

    // Double pointer declaration
    int **dptr = &ptr;

    // Access value
    printf("Stored Value = %d", **dptr);
}

/*
OUTPUT:
Stored Value = 100
*/