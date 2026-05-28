/*
===========================================
Q1. Write a C program to add two numbers
using argument with return value function.
===========================================
*/

#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}