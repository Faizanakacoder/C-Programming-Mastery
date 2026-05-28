/*
===========================================
Question:03
Write a C program to take input from user
and display the entered value.
===========================================
*/

#include<stdio.h>

void main()
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    printf("You entered: %d", a);
}