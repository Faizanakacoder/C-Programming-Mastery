/*
========================================
Program : Skip Processing Using Goto
File    : example3.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
1
3
5
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        if(i == 2)
        {
            goto skip;
        }

        printf("%d\n", i);

        skip: ;
    }

    return 0;
}