/*
===========================================
Question 09:
Write a C program to swap
two float values using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variables
    float a = 10.5, b = 20.5, temp;

    // Pointer declarations
    float *p1 = &a;
    float *p2 = &b;

    // Swapping logic
    temp = *p1;

    *p1 = *p2;

    *p2 = temp;

    // Display swapped values
    printf("A = %.2f\n", a);

    printf("B = %.2f", b);
}

/*
OUTPUT:
A = 20.50
B = 10.50
*/