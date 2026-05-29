/*
===========================================
Question 10:
Write a basic C program demonstrating
pointer size concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    // Pointer declarations
    int *p1;
    char *p2;
    float *p3;
    double *p4;

    // Display sizes
    printf("Integer Pointer Size = %d bytes\n", sizeof(p1));

    printf("Character Pointer Size = %d bytes\n", sizeof(p2));

    printf("Float Pointer Size = %d bytes\n", sizeof(p3));

    printf("Double Pointer Size = %d bytes", sizeof(p4));
}

/*
OUTPUT:
Integer Pointer Size = 8 bytes
Character Pointer Size = 8 bytes
Float Pointer Size = 8 bytes
Double Pointer Size = 8 bytes
*/