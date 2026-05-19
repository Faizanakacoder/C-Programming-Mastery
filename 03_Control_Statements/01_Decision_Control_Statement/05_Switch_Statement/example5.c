/*
========================================
Program : Vowel Checker
File    : example5.c
Topic   : Switch Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    char ch = 'a';

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;

        default:
            printf("Consonant");
    }

    return 0;
}