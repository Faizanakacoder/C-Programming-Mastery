/*
===========================================
Q4. Write a C program to divide two numbers
using function.
===========================================
*/

#include<stdio.h>

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int result;

    result = div(20, 5);

    printf("Quotient = %d", result);

    return 0;
}