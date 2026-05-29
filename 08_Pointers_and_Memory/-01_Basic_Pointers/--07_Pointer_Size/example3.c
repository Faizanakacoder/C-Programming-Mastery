/*
===========================================
Question 03:
Write a C program to find size
of float pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float pointer declaration
    float *fp;

    // Display pointer size
    printf("Float Pointer Size = %d bytes", sizeof(fp));
}

/*
OUTPUT:
Float Pointer Size = 8 bytes
*/