/*
===========================================
Question 02:
Write a C program to initialize
a character pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'A';

    // Character pointer initialization
    char *ptr = &ch;

    // Display character
    printf("Character = %c\n", ch);

    // Display using pointer
    printf("Using Pointer = %c", *ptr);
}

/*
OUTPUT:
Character = A
Using Pointer = A
*/