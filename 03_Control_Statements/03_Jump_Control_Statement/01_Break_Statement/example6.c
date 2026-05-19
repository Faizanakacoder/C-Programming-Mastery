/*
========================================
Program : Menu Exit Program
File    : example6.c
Topic   : Break Statement
Author  : Faizanakacoder
========================================

Output:
===== MENU =====
1. Start
2. Exit
Exiting Program
*/

#include <stdio.h>

int main()
{
    int choice = 2;

    while(1)
    {
        printf("===== MENU =====\n");
        printf("1. Start\n");
        printf("2. Exit\n");

        if(choice == 2)
        {
            printf("Exiting Program");
            break;
        }
    }

    return 0;
}