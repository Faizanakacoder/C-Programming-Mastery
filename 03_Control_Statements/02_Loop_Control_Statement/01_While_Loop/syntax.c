/*
==================================================
Program : While Loop Syntax
File    : syntax.c
Topic   : While Loop
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of while loop in C.

Syntax:
while(condition)
{
    // code
}
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int i = 1;

    // While loop
    while(i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    // Returning successful execution
    return 0;
}