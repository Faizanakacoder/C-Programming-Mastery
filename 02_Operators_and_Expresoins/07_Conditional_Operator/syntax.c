/*
==================================================
Program : Conditional Operator Syntax
File    : syntax.c
Topic   : Conditional Operator
Author  : Faizanakacoder

Description:
This program demonstrates conditional
(ternary) operator in C language.

Syntax:
condition ? true_statement : false_statement;
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int age = 20;

    // Conditional operator
    age >= 18
    ? printf("Eligible to Vote")
    : printf("Not Eligible to Vote");

    // Returning successful execution
    return 0;
}