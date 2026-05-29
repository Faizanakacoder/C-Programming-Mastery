/*
===========================================
Question 06:
Write a C program demonstrating
character pointer arithmetic.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character array
    char str[] = "ABC";

    // Pointer declaration
    char *ptr = str;

    // Display first character
    printf("%c\n", *ptr);

    // Increment pointer
    ptr++;

    // Display next character
    printf("%c", *ptr);
}

/*
OUTPUT:
A
B
*/