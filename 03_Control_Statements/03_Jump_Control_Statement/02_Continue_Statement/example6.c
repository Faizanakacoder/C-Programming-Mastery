/*
========================================
Program : Skip Negative Numbers
File    : example6.c
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
    int i = -3;

    do
    {
        i++;

        if(i < 0)
        {
            continue;
        }

        printf("%d\n", i);

    }
    while(i < 5);

    return 0;
}