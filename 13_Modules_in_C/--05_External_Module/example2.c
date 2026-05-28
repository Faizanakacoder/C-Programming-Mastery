/*
===========================================
Question: 02
Write a program to modify extern variable.
===========================================
*/

#include<stdio.h>

int x = 10;

void change()
{
    extern int x;
    x = x + 5;
}

void main()
{
    change();
    printf("%d", x);
}

/*
OUTPUT:
15
*/