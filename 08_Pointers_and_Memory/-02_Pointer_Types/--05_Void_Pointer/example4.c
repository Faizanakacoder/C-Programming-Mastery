/*
===========================================
Question 04:
Write a C program to store
character address in void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'A';

    // Void pointer declaration
    void *ptr = &ch;

    // Display character
    printf("Character = %c", *(char *)ptr);
}

/*
OUTPUT:
Character = A
*/