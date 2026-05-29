/*
===========================================
Question 07:
Write a C program to modify value
using initialized pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 50;

    // Pointer initialization
    int *p = &x;

    // Modify value using pointer
    *p = 100;

    // Display modified value
    printf("Modified Value = %d", x);
}

/*
OUTPUT:
Modified Value = 100
*/