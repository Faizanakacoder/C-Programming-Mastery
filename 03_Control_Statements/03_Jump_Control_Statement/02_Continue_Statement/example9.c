/*
========================================
Program : Continue in Do While Loop
File    : example9.c
Topic   : Continue Statement
Author  : Faizanakacoder
========================================

Output:
1
2
3
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
    int i = 0;

    do
    {
        i++;

        if(i == 4)
        {
            continue;
        }

        printf("%d\n", i);

    }
    while(i < 10);

    return 0;
}