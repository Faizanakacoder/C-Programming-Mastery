/*
===========================================
Question: 01
Write a C program to add two numbers
using Multi File Module concept.
===========================================
*/

#include<stdio.h>

void add()
{
    int a = 10, b = 20;
    printf("Sum = %d", a + b);
}

void main()
{
    add();
}

/*
OUTPUT:
Sum = 30
*/