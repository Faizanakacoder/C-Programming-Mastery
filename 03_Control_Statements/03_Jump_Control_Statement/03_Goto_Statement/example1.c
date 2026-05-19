/*
========================================
Program : Simple Goto Jump
File    : example1.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
Hello
End
*/

#include <stdio.h>

int main()
{
    printf("Hello\n");

    goto end;

    printf("Skip this line\n");

end:
    printf("End\n");

    return 0;
}