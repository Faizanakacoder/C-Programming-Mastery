/*
==================================================
Program : Assignment Operators Syntax
File    : syntax.c
Topic   : Assignment Operators
Author  : Faizanakacoder

Description:
This program demonstrates all assignment
operators in C language.

Assignment Operators:
=  -> Assign
+= -> Add and Assign
-= -> Subtract and Assign
*= -> Multiply and Assign
/= -> Divide and Assign
%= -> Modulus and Assign
==================================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int num = 20;

    // Assignment operator
    num = 20;
    printf("=  Operator : %d\n", num);

    // Add and assign
    num += 10;
    printf("+= Operator : %d\n", num);

    // Subtract and assign
    num -= 5;
    printf("-= Operator : %d\n", num);

    // Multiply and assign
    num *= 2;
    printf("*= Operator : %d\n", num);

    // Divide and assign
    num /= 5;
    printf("/= Operator : %d\n", num);

    // Modulus and assign
    num %= 3;
    printf("%%= Operator : %d\n", num);

    // Returning successful execution
    return 0;
}