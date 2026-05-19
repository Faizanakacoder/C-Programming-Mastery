/*
========================================
Program : Student Pass Check
File    : example2.c
Topic   : Nested If Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int marks = 55;
    int attendance = 80;

    if(marks >= 40)
    {
        if(attendance >= 75)
        {
            printf("Student Passed");
        }
    }

    return 0;
}