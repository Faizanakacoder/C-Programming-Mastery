/*
===========================================
Question 01:
Write a C program to declare
a character pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'A';

    // Character pointer
    char *ptr = &ch;

    // Display value
    printf("Character = %c", *ptr);
}

/*
OUTPUT:
Character = A
*/