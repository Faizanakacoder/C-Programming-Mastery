/*
========================================
Program : Multiplication Using Return
File    : example4.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
20
*/

#include <stdio.h>

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    printf("%d\n", mul(4, 5));

    return 0;
}