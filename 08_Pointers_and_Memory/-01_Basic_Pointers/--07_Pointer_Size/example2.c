/*
===========================================
Question 02:
Write a C program to find size
of character pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character pointer declaration
    char *ptr;

    // Display pointer size
    printf("Character Pointer Size = %d bytes", sizeof(ptr));
}

/*
OUTPUT:
Character Pointer Size = 8 bytes
*/