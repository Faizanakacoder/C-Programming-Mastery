/*
===========================================
Question 05:
Write a C program demonstrating
character pointer dereference.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'A';

    // Character pointer
    char *ptr = &ch;

    // Display dereferenced character
    printf("Character = %c", *ptr);
}

/*
OUTPUT:
Character = A
*/