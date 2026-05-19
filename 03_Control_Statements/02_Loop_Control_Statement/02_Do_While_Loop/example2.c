/*
========================================
Program : Print Even Numbers
File    : example2.c
Topic   : Do While Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i = 2;

    do
    {
        printf("%d\n", i);
        i += 2;
    }
    while(i <= 20);

    return 0;
}