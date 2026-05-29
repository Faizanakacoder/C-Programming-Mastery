/*
===========================================
Question 09:
Write a C program showing difference
between NULL and uninitialized pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // NULL pointer
    int *p1 = NULL;

    // Uninitialized pointer
    int *p2;

    // Display NULL pointer
    printf("NULL Pointer = %u\n", p1);

    // Display garbage pointer
    printf("Uninitialized Pointer = %u", p2);
}

/*
OUTPUT:
NULL Pointer = 0
Uninitialized Pointer = 6422298
*/