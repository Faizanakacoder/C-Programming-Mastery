/*
===========================================
Question 09:
Write a C program showing relationship
between pointer and dereference operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int number = 200;

    // Pointer initialization
    int *ptr = &number;

    // Display address
    printf("Pointer Stores = %u\n", ptr);

    // Display dereferenced value
    printf("Dereferenced Value = %d", *ptr);
}

/*
OUTPUT:
Pointer Stores = 6422292
Dereferenced Value = 200
*/