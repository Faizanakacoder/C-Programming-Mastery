/*
===========================================
Question: 06
Write a program to increment static variable.
===========================================
*/

#include<stdio.h>

void inc()
{
    static int x = 5;
    x = x + 2;

    printf("%d\n", x);
}

void main()
{
    inc();
    inc();
}

/*
OUTPUT:
7
9
*/