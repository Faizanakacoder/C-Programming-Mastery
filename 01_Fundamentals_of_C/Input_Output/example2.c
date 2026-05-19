/*
========================================
Program : Input Using scanf()
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