/*
===========================================
Question 06:
Write a C program to display size
of multiple pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Pointer declarations
    int *p1;
    char *p2;
    float *p3;

    // Display sizes
    printf("Integer Pointer = %d bytes\n", sizeof(p1));

    printf("Character Pointer = %d bytes\n", sizeof(p2));

    printf("Float Pointer = %d bytes", sizeof(p3));
}

/*
OUTPUT:
Integer Pointer = 8 bytes
Character Pointer = 8 bytes
Float Pointer = 8 bytes
*/