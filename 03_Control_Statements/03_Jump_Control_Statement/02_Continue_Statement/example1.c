/*
========================================
Program : Skip Number 3 Using Continue
File    : example1.c
Topic   : Continue Statement
Author  : Faizanakacoder
========================================

Output:
1
2
4
5
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
        if(i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}