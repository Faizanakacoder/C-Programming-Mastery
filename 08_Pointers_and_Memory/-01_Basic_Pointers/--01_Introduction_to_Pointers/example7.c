/*
===========================================
Question 07:
Write a C program using character pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    char ch = 'A';

    char *ptr = &ch;

    printf("Character = %c\n", ch);

    printf("Using Pointer = %c", *ptr);
}

/*
OUTPUT:
Character = A
Using Pointer = A
*/