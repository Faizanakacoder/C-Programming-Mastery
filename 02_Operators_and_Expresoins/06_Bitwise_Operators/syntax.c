/*
==================================================
Program : Bitwise Operators Syntax
File    : syntax.c
Topic   : Bitwise Operators
Author  : Faizanakacoder

Description:
This program demonstrates all bitwise
operators in C language.

Bitwise Operators:
&  -> Bitwise AND
|  -> Bitwise OR
^  -> Bitwise XOR
~  -> Bitwise NOT
<< -> Left Shift
>> -> Right Shift
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int a = 10;
    int b = 5;

    // Bitwise AND
    printf("a & b = %d\n", a & b);

    // Bitwise OR
    printf("a | b = %d\n", a | b);

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b);

    // Bitwise NOT
    printf("~a = %d\n", ~a);

    // Left Shift
    printf("a << 1 = %d\n", a << 1);

    // Right Shift
    printf("a >> 1 = %d\n", a >> 1);

    // Returning successful execution
    return 0;
}