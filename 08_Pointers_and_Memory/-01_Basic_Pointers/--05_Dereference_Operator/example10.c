/*
===========================================
Question 10:
Write a basic C program demonstrating
dereference operator concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 500;

    // Pointer declaration and initialization
    int *p = &num;

    // Display original value
    printf("Original Value = %d\n", num);

    // Display address
    printf("Address = %u\n", p);

    // Display dereferenced value
    printf("Value using Dereference = %d\n", *p);

    // Modify value using dereference operator
    *p = 1000;

    // Display modified value
    printf("Modified Value = %d", num);
}

/*
OUTPUT:
Original Value = 500
Address = 6422292
Value using Dereference = 500
Modified Value = 1000
*/