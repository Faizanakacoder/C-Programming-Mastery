/*
========================================
Program : Month Name
File    : example3.c
Topic   : Switch Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int month = 5;

    switch(month)
    {
        case 1:
            printf("January");
            break;

        case 2:
            printf("February");
            break;

        case 5:
            printf("May");
            break;

        default:
            printf("Invalid Month");
    }

    return 0;
}