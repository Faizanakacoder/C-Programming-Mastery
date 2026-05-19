/*
========================================
Program : Break in Switch Statement
File    : example8.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
Monday
*/

#include <stdio.h>

int main()
{
    int day = 1;

    switch(day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        default:
            printf("Invalid Day");
    }

    return 0;
}