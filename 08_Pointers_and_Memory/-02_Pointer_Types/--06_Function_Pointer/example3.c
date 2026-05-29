/*
===========================================
Question 03:
Subtraction using function pointer
===========================================
*/

#include<stdio.h>

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int (*ptr)(int, int) = sub;

    printf("Result = %d", ptr(50, 20));

    return 0;
}

/*
OUTPUT:
Result = 30
*/