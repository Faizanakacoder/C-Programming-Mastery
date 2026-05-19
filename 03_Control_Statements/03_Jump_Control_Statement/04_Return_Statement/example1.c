/*
========================================
Program : Simple Return Value
File    : example1.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
10
*/

#include <stdio.h>

int getValue()
{
    return 10;
}

int main()
{
    printf("%d\n", getValue());
    return 0;
}