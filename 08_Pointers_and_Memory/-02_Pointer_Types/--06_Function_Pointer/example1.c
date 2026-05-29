/*
===========================================
Question 01:
Write a C program to declare
a function pointer.
===========================================
*/

#include<stdio.h>

int main()
{
    int add(int, int);

    int (*ptr)(int, int);

    printf("Function pointer declared successfully");

    return 0;
}

/*
OUTPUT:
Function pointer declared successfully
*/