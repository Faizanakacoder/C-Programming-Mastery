/*
===========================================
Question 09:
Write a C program to modify variable
value using pointer and address operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 25;

    // Pointer initialization
    int *p = &x;

    // Modify value using pointer
    *p = 90;

    // Display modified value
    printf("Modified Value = %d", x);
}

/*
OUTPUT:
Modified Value = 90
*/