/*
==================================================
Program : Logical Operators Syntax
File    : syntax.c
Topic   : Logical Operators
Author  : Faizanakacoder

Description:
This program demonstrates all logical
operators in C language.

Logical Operators:
&& -> Logical AND
|| -> Logical OR
!  -> Logical NOT
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int a = 10;
    int b = 20;

    // Logical AND
    printf("AND Result = %d\n", (a < b && b > a));

    // Logical OR
    printf("OR Result = %d\n", (a > b || b > a));

    // Logical NOT
    printf("NOT Result = %d\n", !(a > b));

    // Returning successful execution
    return 0;
}