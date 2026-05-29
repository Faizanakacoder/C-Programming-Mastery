/*
===========================================
Question 02:
Write a C program to store
character address in pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'B';

    // Pointer declaration
    char *ptr = &ch;

    // Display address
    printf("Address = %u", ptr);
}

/*
OUTPUT:
Address = 6422291
*/