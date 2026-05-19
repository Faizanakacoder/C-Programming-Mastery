/*
========================================
Program : Login System
File    : example3.c
Topic   : Nested If Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int username = 1234;
    int password = 5678;

    if(username == 1234)
    {
        if(password == 5678)
        {
            printf("Login Successful");
        }
    }

    return 0;
}