/*
===========================================
Question: 09
Write a program showing multiple extern access.
===========================================
*/

#include<stdio.h>

int value = 5;

void f1()
{
    extern int value;
    value++;
}

void f2()
{
    extern int value;
    value++;
}

void main()
{
    f1();
    f2();

    printf("%d", value);
}

/*
OUTPUT:
7
*/