/*
===========================================
Question 07:
Simple function pointer demo
===========================================
*/

#include<stdio.h>

int square(int x)
{
    return x * x;
}

int main()
{
    int (*ptr)(int) = square;

    printf("Square = %d", ptr(6));

    return 0;
}

/*
OUTPUT:
Square = 36
*/