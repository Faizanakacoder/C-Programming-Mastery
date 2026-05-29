/*
===========================================
Question 01:
Write a C program to find size
of integer pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer pointer declaration
    int *p;

    // Display pointer size
    printf("Integer Pointer Size = %d bytes", sizeof(p));
}

/*
OUTPUT:
Integer Pointer Size = 8 bytes
*/