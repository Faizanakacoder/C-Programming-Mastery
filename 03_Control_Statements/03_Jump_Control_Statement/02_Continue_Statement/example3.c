/*
========================================
Program : Skip Odd Numbers
File    : example3.c
Topic   : Continue Statement
Author  : Faizanakacoder
========================================

Output:
2
4
6
8
10
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i % 2 != 0)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}