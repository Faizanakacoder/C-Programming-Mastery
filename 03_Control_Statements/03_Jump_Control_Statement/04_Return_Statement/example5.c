/*
========================================
Program : Division Using Return
File    : example5.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
5.00
*/

#include <stdio.h>

float div(int a, int b)
{
    return (float)a / b;
}

int main()
{
    printf("%.2f\n", div(10, 2));

    return 0;
}