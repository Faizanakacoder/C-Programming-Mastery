/*
===========================================
Question 09:
Write a C program showing relationship
between pointer and variable.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int number = 75;

    // Pointer initialization
    int *ptr = &number;

    // Display original value
    printf("Variable Value = %d\n", number);

    // Display address of variable
    printf("Variable Address = %u\n", &number);

    // Display pointer stored address
    printf("Pointer Stores = %u\n", ptr);

    // Display value using pointer
    printf("Dereferenced Value = %d", *ptr);
}

/*
OUTPUT:
Variable Value = 75
Variable Address = 6422292
Pointer Stores = 6422292
Dereferenced Value = 75
*/