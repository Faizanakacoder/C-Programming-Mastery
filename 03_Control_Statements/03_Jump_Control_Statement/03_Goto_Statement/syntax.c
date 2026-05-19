/*
========================================
Program : Goto Statement Syntax
File    : syntax.c
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

    printf("This will not print\n");

end:
    printf("End\n");

    return 0;
}