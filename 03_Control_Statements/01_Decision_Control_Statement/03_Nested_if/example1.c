/*
========================================
Program : Voting Eligibility
File    : example1.c
Topic   : Nested If Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int age = 20;
    int citizen = 1;

    if(age >= 18)
    {
        if(citizen == 1)
        {
            printf("Eligible to Vote");
        }
    }

    return 0;
}