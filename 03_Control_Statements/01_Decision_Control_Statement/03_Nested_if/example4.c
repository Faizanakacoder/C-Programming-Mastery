/*
========================================
Program : Age and License Check
File    : example4.c
Topic   : Nested If Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int age = 21;
    int license = 1;

    if(age >= 18)
    {
        if(license == 1)
        {
            printf("Allowed to Drive");
        }
    }

    return 0;
}