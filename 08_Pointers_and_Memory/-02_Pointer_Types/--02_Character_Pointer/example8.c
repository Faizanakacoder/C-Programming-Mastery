/*
===========================================
Question 08:
Write a C program to traverse
string using character pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // String declaration
    char str[] = "WORLD";

    // Pointer declaration
    char *ptr = str;

    // Traverse string
    while(*ptr != '\0')
    {
        printf("%c\n", *ptr);

        ptr++;
    }
}

/*
OUTPUT:
W
O
R
L
D
*/