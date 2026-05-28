/*
===========================================
Q7. Write a C program to find factorial of a number.
===========================================
*/

#include<stdio.h>

int fact(int n)
{
    int i, f = 1;

    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{
    int result;

    result = fact(5);

    printf("Factorial = %d", result);

    return 0;
}