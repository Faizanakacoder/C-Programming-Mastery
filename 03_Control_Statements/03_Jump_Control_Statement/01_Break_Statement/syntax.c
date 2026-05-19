/*
==================================================
Program : Break Statement Syntax
File    : syntax.c
Topic   : Break Statement
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of break statement in C.

The break statement immediately
terminates a loop or switch statement.

Syntax:

break;

==================================================

Output:
1
2
3
4
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}