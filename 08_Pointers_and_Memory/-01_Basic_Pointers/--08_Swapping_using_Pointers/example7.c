/*
===========================================
Question 07:
Write a C program demonstrating
call by address swapping.
===========================================
*/

#include<stdio.h>

void swap(int *x, int *y)
{
    // Temporary variable
    int temp;

    // Swapping logic
    temp = *x;

    *x = *y;

    *y = temp;
}

void main()
{
    // Variable declaration
    int a = 1, b = 2;

    // Function call
    swap(&a, &b);

    // Display swapped values
    printf("A = %d\n", a);

    printf("B = %d", b);
}

/*
OUTPUT:
A = 2
B = 1
*/