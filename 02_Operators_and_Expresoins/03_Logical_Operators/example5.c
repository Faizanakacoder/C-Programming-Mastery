/*
========================================
Program : Voting Eligibility Example
File    : example5.c
Topic   : Logical Operators
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int age = 20;
    int citizen = 1;

    // Checking voting eligibility
    if(age >= 18 && citizen == 1)
    {
        printf("Eligible to Vote");
    }

    return 0;
}