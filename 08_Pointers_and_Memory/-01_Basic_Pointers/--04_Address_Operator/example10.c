/*
===========================================
Question 10:
Write a basic C program demonstrating
address operator concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int number = 200;

    // Pointer declaration and initialization
    int *ptr = &number;

    // Display variable value
    printf("Number = %d\n", number);

    // Display variable address
    printf("Address = %u\n", &number);

    // Display pointer value
    printf("Pointer Stores = %u\n", ptr);

    // Display dereferenced value
    printf("Value using Pointer = %d", *ptr);
}

/*
OUTPUT:
Number = 200
Address = 6422292
Pointer Stores = 6422292
Value using Pointer = 200
*/