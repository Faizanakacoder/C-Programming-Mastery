/*
========================================
Program : Break in While Loop
File    : example4.c
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

    while(i <= 10)
    {
        if(i == 5)
        {
            break;
        }

        printf("%d\n", i);
        i++;
    }

    return 0;
}