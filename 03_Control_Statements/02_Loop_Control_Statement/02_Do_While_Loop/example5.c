/*
========================================
Program : Multiplication Table
File    : example5.c
Topic   : Do While Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int number = 5;
    int i = 1;

    do
    {
        printf("%d x %d = %d\n",
               number,
               i,
               number * i);

        i++;
    }
    while(i <= 10);

    return 0;
}