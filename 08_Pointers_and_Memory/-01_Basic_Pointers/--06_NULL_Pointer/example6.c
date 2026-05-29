/*
===========================================
Question 06:
Write a C program assigning valid
address after NULL initialization.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 100;

    // NULL pointer initialization
    int *p = NULL;

    // Assign valid address later
    p = &x;

    // Display value using pointer
    printf("Value = %d", *p);
}

/*
OUTPUT:
Value = 100
*/