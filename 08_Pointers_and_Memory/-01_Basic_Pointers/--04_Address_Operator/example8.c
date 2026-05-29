/*
===========================================
Question 08:
Write a C program showing relationship
between pointer and address operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 75;

    // Pointer stores address using &
    int *p = &x;

    // Display variable address
    printf("Address using & = %u\n", &x);

    // Display pointer value
    printf("Address stored in pointer = %u", p);
}

/*
OUTPUT:
Address using & = 6422292
Address stored in pointer = 6422292
*/