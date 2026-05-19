/*
==================================================
Program : Increment and Decrement Syntax
File    : syntax.c
Topic   : Increment and Decrement Operators
Author  : Faizanakacoder

Description:
This program demonstrates increment
and decrement operators in C language.

Operators:
++ -> Increment
-- -> Decrement
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int number = 10;

    // Increment operator
    number++;
    printf("After Increment = %d\n", number);

    // Decrement operator
    number--;
    printf("After Decrement = %d\n", number);

    // Pre Increment
    printf("Pre Increment = %d\n", ++number);

    // Post Increment
    printf("Post Increment = %d\n", number++);

    // Pre Decrement
    printf("Pre Decrement = %d\n", --number);

    // Post Decrement
    printf("Post Decrement = %d\n", number--);

    // Returning successful execution
    return 0;
}