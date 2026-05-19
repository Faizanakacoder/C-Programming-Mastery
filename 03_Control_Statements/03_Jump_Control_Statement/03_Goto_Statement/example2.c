/*
========================================
Program : Skip Section Using Goto
File    : example2.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
A
C
*/

#include <stdio.h>

int main()
{
    printf("A\n");

    goto skip;

    printf("B\n");

skip:
    printf("C\n");

    return 0;
}