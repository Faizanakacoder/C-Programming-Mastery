/*
========================================
Program : Stop on Character
File    : example10.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
A
B
C
D
*/

#include <stdio.h>

int main()
{
    char ch;

    for(ch = 'A'; ch <= 'Z'; ch++)
    {
        if(ch == 'E')
        {
            break;
        }

        printf("%c\n", ch);
    }

    return 0;
}