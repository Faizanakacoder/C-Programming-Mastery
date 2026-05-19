/*
========================================
Program : Greatest of Two Numbers
File    : example5.c
Topic   : Nested If Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int a = 20;
    int b = 10;

    if(a != b)
    {
        if(a > b)
        {
            printf("A is Greater");
        }
    }

    return 0;
}