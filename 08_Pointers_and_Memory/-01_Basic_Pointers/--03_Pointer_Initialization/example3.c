/*
===========================================
Question 03:
Write a C program to initialize
a float pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variable
    float num = 15.5;

    // Float pointer initialization
    float *fp = &num;

    // Display float value
    printf("Float Value = %.2f\n", num);

    // Display using pointer
    printf("Using Pointer = %.2f", *fp);
}

/*
OUTPUT:
Float Value = 15.50
Using Pointer = 15.50
*/