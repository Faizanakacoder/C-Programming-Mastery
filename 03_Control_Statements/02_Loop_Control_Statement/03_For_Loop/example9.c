/*
========================================
Program : Cube Numbers
File    : example9.c
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
        printf("%d Cube = %d\n", i, i * i * i);
    }

    return 0;
}