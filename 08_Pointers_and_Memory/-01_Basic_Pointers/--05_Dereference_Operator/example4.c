/*
===========================================
Question 04:
Write a C program demonstrating
integer pointer dereference.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 75;

    // Integer pointer
    int *ptr = &num;

    // Display original value
    printf("Original Value = %d\n", num);

    // Display dereferenced value
    printf("Dereferenced Value = %d", *ptr);
}

/*
OUTPUT:
Original Value = 75
Dereferenced Value = 75
*/