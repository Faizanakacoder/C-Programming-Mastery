/*
========================================
Program : Stop at Even Number 8
File    : example2.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
2
4
6
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 2; i <= 20; i += 2)
    {
        if(i == 8)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}