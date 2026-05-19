/*
========================================
Program : Skip Zero Value
File    : example5.c
Topic   : Continue Statement
Author  : Faizanakacoder
========================================

Output:
1
2
3
4
5
*/

#include <stdio.h>

int main()
{
    int i = -1;

    while(i <= 5)
    {
        i++;

        if(i == 0)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}