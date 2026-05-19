/*
========================================
Program : Factorial of a Number
File    : example7.c
Topic   : Do While Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int number = 5;
    int i = 1;
    int factorial = 1;

    do
    {
        factorial = factorial * i;
        i++;
    }
    while(i <= number);

    printf("Factorial = %d", factorial);

    return 0;
}