/*
==================================================
Program : Switch Statement Syntax
File    : syntax.c
Topic   : Switch Statement
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of switch statement in C.

Syntax:
switch(expression)
{
    case value:
        // code
        break;

    default:
        // code
}
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int day = 2;

    // Switch statement
    switch(day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        default:
            printf("Invalid Day");
    }

    // Returning successful execution
    return 0;
}