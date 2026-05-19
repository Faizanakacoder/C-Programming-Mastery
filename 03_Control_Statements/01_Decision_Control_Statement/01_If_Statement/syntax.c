/*
==================================================
Program : If Statement Syntax
File    : syntax.c
Topic   : If Statement
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of if statement in C language.

Syntax:
if(condition)
{
    // code
}
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int age = 20;

    // Checking condition
    if(age >= 18)
    {
        printf("Eligible to Vote");
    }

    // Returning successful execution
    return 0;
}