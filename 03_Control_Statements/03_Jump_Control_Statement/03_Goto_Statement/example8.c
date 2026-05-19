/*
========================================
Program : Flow Control Using Goto
File    : example8.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
A
D
*/

#include <stdio.h>

int main()
{
    printf("A\n");

    goto end;

    printf("B\n");
    printf("C\n");

end:
    printf("D\n");

    return 0;
}