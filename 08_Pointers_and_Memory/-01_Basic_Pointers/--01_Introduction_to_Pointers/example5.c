/*
===========================================
Question 05:
Write a C program to modify variable
value using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int x = 10;

    int *p = &x;

    *p = 50;

    printf("Modified Value = %d", x);
}

/*
OUTPUT:
Modified Value = 50
*/