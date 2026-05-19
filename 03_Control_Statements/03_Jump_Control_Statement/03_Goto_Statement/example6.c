/*
========================================
Program : Skip Input Section
File    : example6.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
Processing Done
*/

#include <stdio.h>

int main()
{
    goto process;

    printf("Input Section\n");

process:
    printf("Processing Done\n");

    return 0;
}