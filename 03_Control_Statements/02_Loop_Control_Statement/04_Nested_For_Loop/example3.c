/*
========================================
Program : Number Pattern
File    : example3.c
Topic   : Nested For Loop
Author  : Faizanakacoder
========================================

Output:
12345
12345
12345
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}