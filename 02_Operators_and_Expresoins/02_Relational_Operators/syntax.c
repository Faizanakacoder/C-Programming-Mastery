/*
==================================================
Program : Relational Operators Syntax
File    : syntax.c
Topic   : Relational Operators
Author  : Faizanakacoder

Description:
This program demonstrates all relational
operators in C language.

Relational Operators:
== -> Equal To
!= -> Not Equal To
>  -> Greater Than
<  -> Less Than
>= -> Greater Than or Equal To
<= -> Less Than or Equal To
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int a = 20;
    int b = 10;

    // Equal to operator
    printf("a == b : %d\n", a == b);

    // Not equal to operator
    printf("a != b : %d\n", a != b);

    // Greater than operator
    printf("a > b : %d\n", a > b);

    // Less than operator
    printf("a < b : %d\n", a < b);

    // Greater than or equal to operator
    printf("a >= b : %d\n", a >= b);

    // Less than or equal to operator
    printf("a <= b : %d\n", a <= b);

    // Returning successful execution
    return 0;
}