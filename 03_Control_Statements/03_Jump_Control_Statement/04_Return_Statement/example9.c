/*
========================================
Program : Factorial Using Return
File    : example9.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
120
*/

#include <stdio.h>

int fact(int n)
{
    int i, f = 1;

    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{
    printf("%d\n", fact(5));

    return 0;
}