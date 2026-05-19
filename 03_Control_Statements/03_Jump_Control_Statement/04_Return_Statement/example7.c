/*
========================================
Program : Square Using Return
File    : example7.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
36
*/

#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    printf("%d\n", square(6));

    return 0;
}