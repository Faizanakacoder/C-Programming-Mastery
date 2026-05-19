/*
========================================
Program : Square Numbers
File    : example8.c
Topic   : For Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d Square = %d\n", i, i * i);
    }

    return 0;
}