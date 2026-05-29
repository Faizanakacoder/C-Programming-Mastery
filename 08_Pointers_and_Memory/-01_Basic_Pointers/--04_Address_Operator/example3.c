/*
===========================================
Question 03:
Write a C program to display address
of a float variable.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variable declaration
    float num = 15.5;

    // Display float value
    printf("Value = %.2f\n", num);

    // Display address
    printf("Address = %u", &num);
}

/*
OUTPUT:
Value = 15.50
Address = 6422290
*/