/*
========================================
Program : Simple Calculator
File    : example5.c
Topic   : Else If Ladder
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    char op = '+';

    if(op == '+')
    {
        printf("Result = %d", a + b);
    }
    else if(op == '-')
    {
        printf("Result = %d", a - b);
    }
    else if(op == '*')
    {
        printf("Result = %d", a * b);
    }
    else if(op == '/')
    {
        printf("Result = %d", a / b);
    }
    else
    {
        printf("Invalid Operator");
    }

    return 0;
}