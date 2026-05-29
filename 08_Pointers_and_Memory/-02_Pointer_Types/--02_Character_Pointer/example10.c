/*
===========================================
Question 10:
Write a C program using
character pointer with function.
===========================================
*/

#include<stdio.h>

void display(char *ptr)
{
    // Display character
    printf("Character = %c", *ptr);
}

void main()
{
    // Character variable
    char ch = 'P';

    // Function call
    display(&ch);
}

/*
OUTPUT:
Character = P
*/