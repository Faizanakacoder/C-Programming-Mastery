/*
========================================
Program : Alphabet Pattern
File    : example7.c
Topic   : Nested For Loop
Author  : Faizanakacoder
========================================

Output:
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/

#include <stdio.h>

int main()
{
    int i, j;
    char ch = 'A';

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%c", ch);
        }

        ch++;

        printf("\n");
    }

    return 0;
}