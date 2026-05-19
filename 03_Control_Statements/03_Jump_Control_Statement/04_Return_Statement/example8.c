/*
========================================
Program : Maximum of Two Numbers
File    : example8.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
20
*/

#include <stdio.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    printf("%d\n", max(10, 20));

    return 0;
}