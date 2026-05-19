/*
========================================
Program : Skip Specific Input (99)
File    : example7.c
Topic   : Continue Statement
Author  : Faizanakacoder
========================================

Output (if input includes 99):
Any number except 99 will print
*/

#include <stdio.h>

int main()
{
    int i;
    int arr[5] = {10, 20, 99, 40, 50};

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == 99)
        {
            continue;
        }

        printf("%d\n", arr[i]);
    }

    return 0;
}