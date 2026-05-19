/*
==================================================
Program : If Else Statement Syntax
File    : syntax.c
Topic   : If Else Statement
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of if else statement in C.

Syntax:
if(condition)
{
    // code if true
}
else
{
    // code if false
}
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int age = 16;

    // Checking condition
    if(age >= 18)
    {
        printf("Eligible to Vote");
    }
    else
    {
        printf("Not Eligible to Vote");
    }

    // Returning successful execution
    return 0;
}