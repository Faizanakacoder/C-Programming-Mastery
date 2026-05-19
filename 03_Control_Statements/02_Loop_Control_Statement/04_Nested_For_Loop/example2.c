/*
========================================
Program : Rectangle Pattern
File    : example2.c
Topic   : Nested For Loop
Author  : Faizanakacoder
========================================

Output:
******
******
******
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}