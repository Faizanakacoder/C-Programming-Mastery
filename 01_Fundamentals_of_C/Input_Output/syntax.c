/*
========================================
Program : Input and Output Syntax
File    : syntax.c
Topic   : Input and Output
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is: %d", age);

    return 0;
}