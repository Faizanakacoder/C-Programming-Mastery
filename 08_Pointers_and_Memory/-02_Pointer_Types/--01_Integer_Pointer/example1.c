/*
===========================================
Question 01:
Write a C program to declare
an integer pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 10;

    // Integer pointer declaration
    int *ptr;

    // Store address
    ptr = &num;

    // Display value
    printf("Value = %d", *ptr);
}

/*
OUTPUT:
Value = 10
*/