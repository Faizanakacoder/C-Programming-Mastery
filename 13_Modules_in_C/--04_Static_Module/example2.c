/*
===========================================
Question: 02
Write a C program to show static variable
retains value.
===========================================
*/

#include<stdio.h>

void demo()
{
    static int x = 10;
    x++;

    printf("%d\n", x);
}

void main()
{
    demo();
    demo();
}

/*
OUTPUT:
11
12
*/