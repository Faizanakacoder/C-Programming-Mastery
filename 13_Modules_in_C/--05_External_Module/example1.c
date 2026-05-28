/*
===========================================
Question: 01
Write a C program to demonstrate extern
variable concept.
===========================================
*/

#include<stdio.h>

int x = 10;   // global variable

void display()
{
    extern int x;
    printf("Value = %d", x);
}

void main()
{
    display();
}

/*
OUTPUT:
Value = 10
*/