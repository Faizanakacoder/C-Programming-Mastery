/*
==================================================
Program : Arithmetic Operators Syntax
File    : syntax.c
Topic   : Arithmetic Operators
Author  : Faizanakacoder

Description:
This program demonstrates all arithmetic
operators in C language.

Arithmetic Operators:
+  -> Addition
-  -> Subtraction
*  -> Multiplication
/  -> Division
%  -> Modulus (Remainder)
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable Declaration
    int a = 20;
    int b = 10;

    // Addition Operator (+)
    printf("Addition = %d\n", a + b);

    // Subtraction Operator (-)
    printf("Subtraction = %d\n", a - b);

    // Multiplication Operator (*)
    printf("Multiplication = %d\n", a * b);

    // Division Operator (/)
    printf("Division = %d\n", a / b);

    // Modulus Operator (%)
    // Returns remainder after division
    printf("Modulus = %d\n", a % b);

    return 0;
}