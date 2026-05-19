/*
========================================
Program : Find Number in Loop
File    : example7.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
Number Found: 7
*/

#include <stdio.h>

int main()
{
    int i;
    int target = 7;

    for(i = 1; i <= 10; i++)
    {
        if(i == target)
        {
            printf("Number Found: %d", i);
            break;
        }
    }

    return 0;
}