/*
========================================
Program : Skip Multiples of 5
File    : example4.c
Topic   : Continue Statement
Author  : Faizanakacoder
========================================

Output:
1
2
3
4
6
7
8
9
10
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i % 5 == 0)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}