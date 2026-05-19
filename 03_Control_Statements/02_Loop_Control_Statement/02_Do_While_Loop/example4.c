/*
========================================
Program : Sum of First 10 Numbers
File    : example4.c
Topic   : Do While Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;

    do
    {
        sum = sum + i;
        i++;
    }
    while(i <= 10);

    printf("Sum = %d", sum);

    return 0;
}