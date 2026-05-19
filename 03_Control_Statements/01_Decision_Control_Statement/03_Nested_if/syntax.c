/*
==================================================
Program : Nested If Statement Syntax
File    : syntax.c
Topic   : Nested If Statement
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of nested if statement in C.

Syntax:
if(condition1)
{
    if(condition2)
    {
        // code
    }
}
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int age = 20;
    int citizen = 1;

    // First condition
    if(age >= 18)
    {
        // Second condition
        if(citizen == 1)
        {
            printf("Eligible to Vote");
        }
    }

    // Returning successful execution
    return 0;
}