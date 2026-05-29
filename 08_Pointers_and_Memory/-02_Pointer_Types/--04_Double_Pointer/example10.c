/*
===========================================
Question 10:
Write a basic C program
demonstrating double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 250;

    // Pointer declaration
    int *ptr = &num;

    // Double pointer declaration
    int **dptr = &ptr;

    // Display values
    printf("Number = %d\n", num);

    printf("Using Pointer = %d\n", *ptr);

    printf("Using Double Pointer = %d", **dptr);
}

/*
OUTPUT:
Number = 250
Using Pointer = 250
Using Double Pointer = 250
*/