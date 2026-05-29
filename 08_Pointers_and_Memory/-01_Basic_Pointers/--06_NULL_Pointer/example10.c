/*
===========================================
Question 10:
Write a basic C program demonstrating
NULL pointer concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int number = 50;

    // Pointer initialized with NULL
    int *ptr = NULL;

    // Check NULL state
    if(ptr == NULL)
    {
        printf("Pointer is currently NULL\n");
    }

    // Assign valid address
    ptr = &number;

    // Display address
    printf("Address = %u\n", ptr);

    // Display value using pointer
    printf("Value = %d", *ptr);
}

/*
OUTPUT:
Pointer is currently NULL
Address = 6422292
Value = 50
*/