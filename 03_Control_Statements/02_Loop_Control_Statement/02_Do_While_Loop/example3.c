/*
========================================
Program : Print Odd Numbers
File    : example3.c
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
        i += 2;
    }
    while(i <= 20);

    return 0;
}