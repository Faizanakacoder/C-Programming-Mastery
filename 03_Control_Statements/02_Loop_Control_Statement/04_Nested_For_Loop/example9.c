/*
========================================
Program : Pyramid Pattern
File    : example9.c
Topic   : Nested For Loop
Author  : Faizanakacoder
========================================

Output:
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>

int main()
{
    int i, j, space;

    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}