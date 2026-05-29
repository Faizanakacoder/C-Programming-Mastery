/*
===========================================
Question 10:
Write a C program demonstrating pointer
arithmetic on strings.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[] = "HELLO";
    char *ptr;

    ptr = str;

    printf("%c\n", *ptr);

    ptr++;

    printf("%c\n", *ptr);

    ptr++;

    printf("%c", *ptr);
}

/*
OUTPUT:
H
E
L
*/