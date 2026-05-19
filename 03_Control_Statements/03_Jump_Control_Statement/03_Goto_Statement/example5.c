/*
========================================
Program : Condition Jump Using Goto
File    : example5.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
Start
End
*/

#include <stdio.h>

int main()
{
    printf("Start\n");

    goto end;

    printf("Middle\n");

end:
    printf("End\n");

    return 0;
}