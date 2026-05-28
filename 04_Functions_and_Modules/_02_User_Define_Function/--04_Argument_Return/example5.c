/*
===========================================
Q5. Write a C program to find maximum of two numbers.
===========================================
*/

#include<stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int result;

    result = max(10, 25);

    printf("Maximum = %d", result);

    return 0;
}