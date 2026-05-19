/*
========================================
Program : Combined Logical Operators
File    : example4.c
Topic   : Logical Operators
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int age = 22;
    int citizen = 1;

    // Combining AND and OR
    printf("%d", ((age >= 18 && citizen == 1) || age > 60));

    return 0;
}