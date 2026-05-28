/*
===========================================
Question: 03
Write a program using extern in multiple functions.
===========================================
*/

#include<stdio.h>

int count = 0;

void inc()
{
    extern int count;
    count++;
}

void show()
{
    extern int count;
    printf("%d", count);
}

void main()
{
    inc();
    inc();
    show();
}

/*
OUTPUT:
2
*/