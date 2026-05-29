/*
===========================================
Question 03:
Write a C program to swap values
without returning anything.
===========================================
*/

#include<stdio.h>

void swap(int *a, int *b)
{
    // Temporary variable
    int temp;

    // Swapping
    temp = *a;

    *a = *b;

    *b = temp;
}

void main()
{
    // Variable declaration
    int a = 100, b = 200;

    // Swapping function call
    swap(&a, &b);

    // Display swapped values
    printf("A = %d\n", a);

    printf("B = %d", b);
}

/*
OUTPUT:
A = 200
B = 100
*/