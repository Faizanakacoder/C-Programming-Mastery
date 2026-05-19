/*
========================================
Program : Largest of Three Numbers
File    : example3.c
Topic   : Else If Ladder
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int a = 20;
    int b = 50;
    int c = 30;

    if(a > b && a > c)
    {
        printf("A is Largest");
    }
    else if(b > a && b > c)
    {
        printf("B is Largest");
    }
    else
    {
        printf("C is Largest");
    }

    return 0;
}