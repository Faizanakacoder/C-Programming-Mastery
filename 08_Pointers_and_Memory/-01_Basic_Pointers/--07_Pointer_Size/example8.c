/*
===========================================
Question 08:
Write a C program using sizeof()
operator with pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer pointer
    int *p;

    // Display pointer size
    printf("Pointer Size using sizeof = %d bytes", sizeof(p));
}

/*
OUTPUT:
Pointer Size using sizeof = 8 bytes
*/