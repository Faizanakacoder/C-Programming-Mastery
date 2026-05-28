/*
===========================================
Question: 03
Write a program to compare normal and static
variable behavior.
===========================================
*/

#include<stdio.h>

void test()
{
    int a = 0;
    static int b = 0;

    a++;
    b++;

    printf("a = %d, b = %d\n", a, b);
}

void main()
{
    test();
    test();
}

/*
OUTPUT:
a = 1, b = 1
a = 1, b = 2
*/