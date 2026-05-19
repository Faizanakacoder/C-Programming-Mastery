/*
========================================
Program : Simple Calculator
File    : example2.c
Topic   : Switch Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    char op = '+';

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}