/*
========================================
Program : Stop Countdown
File    : example9.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
10
9
8
7
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 10; i >= 1; i--)
    {
        if(i == 6)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}