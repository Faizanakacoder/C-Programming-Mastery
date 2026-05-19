/*
==================================================
Program : For Loop Syntax
File    : syntax.c
Topic   : For Loop
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of for loop in C language.

A for loop is used when the number
of repetitions is already known.

Syntax:

for(initialization; condition; update)
{
    // code
}

==================================================
*/

#include <stdio.h>

int main()
{
    int i;

    // For loop
    for(i = 1; i <= 5; i++)
    {
        printf("Value of i = %d\n", i);
    }

    return 0;
}