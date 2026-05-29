/*
===========================================
Question 03:
Write a C program to access
value using integer pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int value = 100;

    // Pointer declaration
    int *ptr = &value;

    // Access value
    printf("Stored Value = %d", *ptr);
}

/*
OUTPUT:
Stored Value = 100
*/