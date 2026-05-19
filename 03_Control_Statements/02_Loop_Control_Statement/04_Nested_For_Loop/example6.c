/*
========================================
Program : Reverse Triangle Pattern
File    : example6.c
Topic   : Nested For Loop
Author  : Faizanakacoder
========================================

Output:
*****
****
***
**
*
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}