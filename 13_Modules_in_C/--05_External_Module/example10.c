/*
===========================================
Question: 10
Write a program demonstrating full extern usage.
===========================================
*/

#include<stdio.h>

int data = 100;

void update()
{
    extern int data;
    data += 50;
}

void main()
{
    update();
    update();
    printf("%d", data);
}

/*
OUTPUT:
200
*/