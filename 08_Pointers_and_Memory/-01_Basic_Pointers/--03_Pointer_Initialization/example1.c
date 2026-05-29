/*
===========================================
Question 01:
Write a C program to initialize
an integer pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable declaration
    int x = 10;

    // Pointer initialization
    int *p = &x;

    // Display variable value
    printf("Value of x = %d\n", x);

    // Display address stored in pointer
    printf("Address stored in pointer = %u", p);
}

/*
OUTPUT:
Value of x = 10
Address stored in pointer = 6422292
*/