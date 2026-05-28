/*
===========================================
Question: 07
Write a program to decrement static variable.
===========================================
*/

#include<stdio.h>

void dec()
{
    static int x = 10;
    x--;

    printf("%d\n", x);
}

void main()
{
    dec();
    dec();
}

/*
OUTPUT:
9
8
*/