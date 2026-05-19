/*
========================================
Program : Multiplication Table
File    : example5.c
Topic   : For Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int number = 5;
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",
               number,
               i,
               number * i);
    }

    return 0;
}