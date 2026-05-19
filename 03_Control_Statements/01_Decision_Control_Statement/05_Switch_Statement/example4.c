/*
========================================
Program : Menu Driven Program
File    : example4.c
Topic   : Switch Statement
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int choice = 2;

    switch(choice)
    {
        case 1:
            printf("Open File");
            break;

        case 2:
            printf("Save File");
            break;

        case 3:
            printf("Exit Program");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}