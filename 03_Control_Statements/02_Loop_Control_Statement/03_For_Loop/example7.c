/*
========================================
Program : Factorial of Number
File    : example7.c
Topic   : For Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i, number = 5;
    int factorial = 1;

    for(i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("Factorial = %d", factorial);

    return 0;
}