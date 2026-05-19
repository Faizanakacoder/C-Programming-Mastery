/*
========================================
Program : Subtraction Using Return
File    : example3.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
12
*/

#include <stdio.h>

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    printf("%d\n", sub(20, 8));

    return 0;
}