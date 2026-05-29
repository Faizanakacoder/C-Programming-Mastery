/*
===========================================
Question 08:
Write a C program to display both
address and value using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 25;

    // Pointer initialization
    int *p = &x;

    // Display variable value
    printf("Value = %d\n", x);

    // Display address
    printf("Address = %u\n", p);

    // Display dereferenced value
    printf("Pointer Value = %d", *p);
}

/*
OUTPUT:
Value = 25
Address = 6422292
Pointer Value = 25
*/