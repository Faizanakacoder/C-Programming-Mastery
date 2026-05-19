/*
========================================
Program : Continue in While Loop
File    : example8.c
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
    int i = 0;

    while(i < 10)
    {
        i++;

        if(i == 5)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}