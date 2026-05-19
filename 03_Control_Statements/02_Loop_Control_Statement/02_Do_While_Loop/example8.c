/*
========================================
Program : Menu Driven Program
File    : example8.c
Topic   : Do While Loop
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Start Program\n");
        printf("2. Exit Program\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

    }
    while(choice != 2);

    printf("Program Ended");

    return 0;
}