/*
===========================================
Question 04:
Write a C program to find size
of double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Double pointer declaration
    double *dp;

    // Display pointer size
    printf("Double Pointer Size = %d bytes", sizeof(dp));
}

/*
OUTPUT:
Double Pointer Size = 8 bytes
*/