/*
========================================
Program : Reverse Countdown
File    : example6.c
Topic   : Do While Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i = 10;

    do
    {
        printf("%d\n", i);
        i--;
    }
    while(i >= 1);

    return 0;
}