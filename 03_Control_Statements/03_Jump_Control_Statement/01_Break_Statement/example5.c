/*
========================================
Program : Break in Do While Loop
File    : example5.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
1
2
3
4
*/

#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        if(i == 5)
        {
            break;
        }

        printf("%d\n", i);
        i++;
    }
    while(i <= 10);

    return 0;
}