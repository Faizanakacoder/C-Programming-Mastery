/*
========================================
Program : Add Two Numbers Using Return
File    : example2.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
Sum = 25
*/

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int sum;

    sum = add(10, 15);

    printf("Sum = %d\n", sum);

    return 0;
}