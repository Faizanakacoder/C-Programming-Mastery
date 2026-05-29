/*
===========================================
Question 03:
Write a C program to access
character using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character declaration
    char letter = 'Z';

    // Pointer declaration
    char *ptr = &letter;

    // Access character
    printf("Character = %c", *ptr);
}

/*
OUTPUT:
Character = Z
*/