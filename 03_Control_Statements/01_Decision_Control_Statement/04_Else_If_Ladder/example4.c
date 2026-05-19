/*
========================================
Program : Day Number Check
File    : example4.c
Topic   : Else If Ladder
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int day = 3;

    if(day == 1)
    {
        printf("Monday");
    }
    else if(day == 2)
    {
        printf("Tuesday");
    }
    else if(day == 3)
    {
        printf("Wednesday");
    }
    else
    {
        printf("Invalid Day");
    }

    return 0;
}