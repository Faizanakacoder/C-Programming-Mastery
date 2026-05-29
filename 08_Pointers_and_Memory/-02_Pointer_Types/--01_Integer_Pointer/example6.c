/*
===========================================
Question 06:
Write a C program demonstrating
integer pointer arithmetic.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer array
    int arr[3] = {10,20,30};

    // Pointer declaration
    int *ptr = arr;

    // Display first value
    printf("First Value = %d\n", *ptr);

    // Increment pointer
    ptr++;

    // Display second value
    printf("Second Value = %d", *ptr);
}

/*
OUTPUT:
First Value = 10
Second Value = 20
*/