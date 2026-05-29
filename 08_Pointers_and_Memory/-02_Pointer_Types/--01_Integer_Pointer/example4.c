/*
===========================================
Question 04:
Write a C program to display
address and value using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int x = 25;

    // Pointer declaration
    int *p = &x;

    // Display address
    printf("Address = %u\n", p);

    // Display value
    printf("Value = %d", *p);
}

/*
OUTPUT:
Address = 6422292
Value = 25
*/