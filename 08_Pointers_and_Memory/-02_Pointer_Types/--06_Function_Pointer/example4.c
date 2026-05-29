/*
===========================================
Question 04:
Multiplication using function pointer
===========================================
*/

#include<stdio.h>

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int (*ptr)(int, int) = mul;

    printf("Result = %d", ptr(5, 4));

    return 0;
}

/*
OUTPUT:
Result = 20
*/