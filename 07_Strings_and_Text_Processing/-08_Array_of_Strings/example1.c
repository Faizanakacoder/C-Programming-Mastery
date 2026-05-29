/*
===========================================
Question 01:
Write a C program to display multiple strings
from an array of strings.
===========================================
*/

#include<stdio.h>

void main()
{
    char names[3][20] =
    {
        "RAM",
        "SHYAM",
        "AMAN"
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        puts(names[i]);
    }
}

/*
OUTPUT:
RAM
SHYAM
AMAN
*/