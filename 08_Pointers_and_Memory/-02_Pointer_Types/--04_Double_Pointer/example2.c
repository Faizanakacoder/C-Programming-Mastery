/*
===========================================
Question 02:
Write a C program to store
pointer address in double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 25;

    // Pointer declaration
    int *ptr = &num;

    // Double pointer
    int **dptr = &ptr;

    // Display address
    printf("Pointer Address = %u", dptr);
}

/*
OUTPUT:
Pointer Address = 6422290
*/