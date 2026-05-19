/*
========================================
Program : Nested Exit Using Goto
File    : example7.c
Topic   : Goto Statement
Author  : Faizanakacoder
========================================

Output:
Loop Break
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            if(i == 2 && j == 2)
            {
                goto end;
            }

            printf("%d %d\n", i, j);
        }
    }

end:
    printf("Loop Break\n");

    return 0;
}