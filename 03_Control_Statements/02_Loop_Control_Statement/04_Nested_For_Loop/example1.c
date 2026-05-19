/*
========================================
Program : Square Star Pattern
File    : example1.c
Topic   : Nested For Loop
Author  : Faizanakacoder
========================================

Output:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}