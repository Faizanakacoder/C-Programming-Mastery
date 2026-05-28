/*
===========================================
Question: 10
Write a program demonstrating static usage
in multiple calls.
===========================================
*/

#include<stdio.h>

void test()
{
    static int x = 100;
    x = x - 10;

    printf("%d\n", x);
}

void main()
{
    test();
    test();
    test();
}

/*
OUTPUT:
90
80
70
*/