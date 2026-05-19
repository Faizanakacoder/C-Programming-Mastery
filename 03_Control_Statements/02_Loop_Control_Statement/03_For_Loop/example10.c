/*
========================================
Program : ASCII Characters
File    : example10.c
Topic   : For Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 65; i <= 90; i++)
    {
        printf("%c = %d\n", i, i);
    }

    return 0;
}