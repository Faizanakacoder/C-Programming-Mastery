/*
===========================================
Question 05:
Write a C program to modify
value using integer pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int num = 10;

    // Pointer declaration
    int *ptr = &num;

    // Modify value
    *ptr = 200;

    // Display modified value
    printf("Modified Value = %d", num);
}

/*
OUTPUT:
Modified Value = 200
*/