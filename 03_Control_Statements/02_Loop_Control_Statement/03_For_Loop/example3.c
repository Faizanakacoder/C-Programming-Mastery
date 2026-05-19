/*
========================================
Program : Print Odd Numbers
File    : example3.c
Topic   : For Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 20; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}