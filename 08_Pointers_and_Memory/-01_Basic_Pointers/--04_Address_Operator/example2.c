/*
===========================================
Question 02:
Write a C program to display address
of a character variable.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'A';

    // Display character
    printf("Character = %c\n", ch);

    // Display address
    printf("Address = %u", &ch);
}

/*
OUTPUT:
Character = A
Address = 6422291
*/