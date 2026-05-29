/*
===========================================
Question 10:
Write a C program demonstrating
basic pointer initialization concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 200;

    // Pointer initialization
    int *p = &num;

    // Display number
    printf("Number = %d\n", num);

    // Display address
    printf("Address = %u\n", p);

    // Display value using pointer
    printf("Value using Pointer = %d", *p);

    // Modify value using pointer
    *p = 500;

    // Display modified value
    printf("\nModified Number = %d", num);
}

/*
OUTPUT:
Number = 200
Address = 6422292
Value using Pointer = 200
Modified Number = 500
*/