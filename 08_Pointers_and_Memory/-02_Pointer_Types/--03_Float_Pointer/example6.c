/*
===========================================
Question 06:
Write a C program demonstrating
float pointer arithmetic.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float array
    float arr[3] = {1.1,2.2,3.3};

    // Pointer declaration
    float *ptr = arr;

    // Display first value
    printf("First = %.1f\n", *ptr);

    // Increment pointer
    ptr++;

    // Display second value
    printf("Second = %.1f", *ptr);
}

/*
OUTPUT:
First = 1.1
Second = 2.2
*/