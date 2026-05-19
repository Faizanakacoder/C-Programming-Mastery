/*
========================================
Program : Stop Multiplication Table
File    : example3.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
*/

#include <stdio.h>

int main()
{
    int i;
    int number = 5;

    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;
        }

        printf("%d x %d = %d\n",
               number,
               i,
               number * i);
    }

    return 0;
}