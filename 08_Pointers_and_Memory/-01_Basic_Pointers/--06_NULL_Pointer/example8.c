/*
===========================================
Question 08:
Write a C program demonstrating
NULL pointer concept.
===========================================
*/

#include<stdio.h>

void main()
{
    // Pointer declaration
    int *ptr = NULL;

    // Display pointer content
    printf("Pointer Content = %u", ptr);

    // Explain pointer state
    printf("\nPointer currently points nowhere");
}

/*
OUTPUT:
Pointer Content = 0
Pointer currently points nowhere
*/