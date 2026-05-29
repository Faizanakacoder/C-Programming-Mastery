/*
===========================================
Question 04:
Write a C program to display
address and value of character.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'K';

    // Pointer declaration
    char *ptr = &ch;

    // Display address
    printf("Address = %u\n", ptr);

    // Display value
    printf("Value = %c", *ptr);
}

/*
OUTPUT:
Address = 6422291
Value = K
*/