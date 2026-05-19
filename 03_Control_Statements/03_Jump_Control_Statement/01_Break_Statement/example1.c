/*
========================================
Program : Stop at Number 5
File    : example1.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
1
2
3
4
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}