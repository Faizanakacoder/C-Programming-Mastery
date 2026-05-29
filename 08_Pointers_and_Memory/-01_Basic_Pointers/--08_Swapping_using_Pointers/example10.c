/*
===========================================
Question 10:
Write a basic C program demonstrating
swapping using pointers.
===========================================
*/

#include<stdio.h>

void swap(int *a, int *b)
{
    // Temporary variable
    int temp;

    // Store first value
    temp = *a;

    // Copy second value
    *a = *b;

    // Copy temp value
    *b = temp;
}

void main()
{
    // Variable declaration
    int x = 50, y = 100;

    // Display original values
    printf("Before Swapping:\n");

    printf("X = %d\n", x);

    printf("Y = %d\n", y);

    // Swapping function call
    swap(&x, &y);

    // Display swapped values
    printf("\nAfter Swapping:\n");

    printf("X = %d\n", x);

    printf("Y = %d", y);
}

/*
OUTPUT:
Before Swapping:
X = 50
Y = 100

After Swapping:
X = 100
Y = 50
*/