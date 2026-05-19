/*
========================================
Program : Return Statement Syntax
File    : syntax.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
Result = 15
*/

#include <stdio.h>

int add()
{
    return 10 + 5;
}

int main()
{
    int result = add();
    printf("Result = %d\n", result);

    return 0;
}