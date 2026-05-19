/*
========================================
Program : Print Numbers 1 to 5
File    : example1.c
Topic   : Do While Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i <= 5);

    return 0;
}