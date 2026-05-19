/*
========================================
Program : Even Odd Using Return
File    : example6.c
Topic   : Return Statement
Author  : Faizanakacoder
========================================

Output:
Even
*/

#include <stdio.h>

int check(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    if(check(6))
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}