/*
========================================
Program : Sum of First 10 Numbers
File    : example4.c
Topic   : For Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}