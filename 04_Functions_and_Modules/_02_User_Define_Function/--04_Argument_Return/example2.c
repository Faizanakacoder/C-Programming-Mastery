/*
===========================================
Q2. Write a C program to subtract two numbers
using argument with return value function.
===========================================
*/

#include<stdio.h>

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int result;

    result = sub(50, 20);

    printf("Difference = %d", result);

    return 0;
}