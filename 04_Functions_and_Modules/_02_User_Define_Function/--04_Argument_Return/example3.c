/*
===========================================
Q3. Write a C program to multiply two numbers
using function.
===========================================
*/

#include<stdio.h>

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int result;

    result = mul(5, 4);

    printf("Product = %d", result);

    return 0;
}