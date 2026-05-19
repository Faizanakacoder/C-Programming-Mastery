/*
==================================================
Program : Nested For Loop Syntax
File    : syntax.c
Topic   : Nested For Loop
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of nested for loop in C.

A nested for loop means:
A for loop inside another for loop.

Outer loop controls rows.
Inner loop controls columns.

Syntax:

for(initialization; condition; update)
{
    for(initialization; condition; update)
    {
        // code
    }
}

==================================================
*/

#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 3; i++)
    {
        // Inner loop for columns
        for(j = 1; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}