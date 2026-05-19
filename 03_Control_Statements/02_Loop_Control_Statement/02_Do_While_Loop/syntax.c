/*
==================================================
Program : Do While Loop Syntax
File    : syntax.c
Topic   : Do While Loop
Author  : Faizanakacoder

Description:
This program demonstrates the basic
working of do while loop in C language.

A do while loop executes the code block
first and checks the condition later.

That means:
The loop executes at least one time.

Syntax:

do
{
    // code
}
while(condition);

==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int i = 1;

    // Do while loop starts
    do
    {
        // Printing current value
        printf("Value of i = %d\n", i);

        // Incrementing value
        i++;
    }
    while(i <= 5);

    // Program execution successful
    return 0;
}