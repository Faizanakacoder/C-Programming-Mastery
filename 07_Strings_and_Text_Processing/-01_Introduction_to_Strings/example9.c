/*
===========================================
Question 09:
Write a C program to store and display multiple strings.
===========================================
*/

#include<stdio.h>

void main()
{
    char names[3][20] = {"RAM", "SHYAM", "AMAN"};
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }
}

/*
OUTPUT:
RAM
SHYAM
AMAN
*/