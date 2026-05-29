/*
===========================================
Question 03:
Write a C program to modify variable
value using dereference operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 25;

    // Pointer initialization
    int *p = &x;

    // Modify value using dereference operator
    *p = 100;

    // Display modified value
    printf("Modified Value = %d", x);
}

/*
OUTPUT:
Modified Value = 100
*/