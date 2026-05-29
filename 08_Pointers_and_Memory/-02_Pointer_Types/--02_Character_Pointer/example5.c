/*
===========================================
Question 05:
Write a C program to modify
character using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch = 'M';

    // Pointer declaration
    char *ptr = &ch;

    // Modify character
    *ptr = 'N';

    // Display modified character
    printf("Modified Character = %c", ch);
}

/*
OUTPUT:
Modified Character = N
*/