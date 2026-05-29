/*
===========================================
Question 05:
Division using function pointer
===========================================
*/

#include<stdio.h>

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int (*ptr)(int, int) = div;

    printf("Result = %d", ptr(20, 5));

    return 0;
}

/*
OUTPUT:
Result = 4
*/