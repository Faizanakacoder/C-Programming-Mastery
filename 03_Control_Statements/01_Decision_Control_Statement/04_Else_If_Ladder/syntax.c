/*
==================================================
Program : Else If Ladder Syntax
File    : syntax.c
Topic   : Else If Ladder
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of else if ladder in C.

Syntax:
if(condition1)
{
    // code
}
else if(condition2)
{
    // code
}
else
{
    // code
}
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int marks = 75;

    // Else if ladder
    if(marks >= 90)
    {
        printf("Grade A");
    }
    else if(marks >= 75)
    {
        printf("Grade B");
    }
    else if(marks >= 50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    // Returning successful execution
    return 0;
}