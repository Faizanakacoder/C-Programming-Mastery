/*
===========================================
Question 02:
Write a C program to swap two
numbers using function and pointers.
===========================================
*/

#include<stdio.h>

void swap(int *a, int *b)
{
    // Temporary variable
    int temp;

    // Swapping values
    temp = *a;

    *a = *b;

    *b = temp;
}

void main()
{
    // Variable declaration
    int x = 5, y = 15;

    // Before swapping
    printf("Before Swapping:\n");

    printf("X = %d\n", x);

    printf("Y = %d\n", y);

    // Function call
    swap(&x, &y);

    // After swapping
    printf("\nAfter Swapping:\n");

    printf("X = %d\n", x);

    printf("Y = %d", y);
}

/*
OUTPUT:
Before Swapping:
X = 5
Y = 15

After Swapping:
X = 15
Y = 5
*/