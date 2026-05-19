/*
========================================
Program : Skip Step in Multiplication Table
File    : example10.c
Topic   : Continue Statement
Author  : Faizanakacoder
========================================

Output:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            continue;
        }

        printf("5 x %d = %d\n", i, 5*i);
    }

    return 0;
}