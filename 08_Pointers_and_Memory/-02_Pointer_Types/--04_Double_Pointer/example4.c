/*
===========================================
Question 04:
Write a C program to display
addresses using double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 50;

    // Pointer declaration
    int *ptr = &x;

    // Double pointer declaration
    int **dptr = &ptr;

    // Display addresses
    printf("Address of x = %u\n", ptr);

    printf("Address of ptr = %u", dptr);
}

/*
OUTPUT:
Address of x = 6422292
Address of ptr = 6422288
*/