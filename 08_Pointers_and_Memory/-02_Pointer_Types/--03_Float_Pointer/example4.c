/*
===========================================
Question 04:
Write a C program to display
address and float value.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variable
    float num = 45.5;

    // Pointer declaration
    float *ptr = &num;

    // Display address
    printf("Address = %u\n", ptr);

    // Display value
    printf("Value = %.2f", *ptr);
}

/*
OUTPUT:
Address = 6422292
Value = 45.50
*/