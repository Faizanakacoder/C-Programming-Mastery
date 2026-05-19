/*
========================================
Program : Error Handling Using Goto
File    : example4.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
Error occurred
*/

#include <stdio.h>

int main()
{
    int a = 5, b = 0;

    if(b == 0)
    {
        goto error;
    }

    printf("%d", a/b);

error:
    printf("Error occurred\n");

    return 0;
}