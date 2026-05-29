/*
===========================================
Question 02:
Call function using function pointer
===========================================
*/

#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int);

    ptr = add;

    printf("Sum = %d", ptr(10, 20));

    return 0;
}

/*
OUTPUT:
Sum = 30
*/