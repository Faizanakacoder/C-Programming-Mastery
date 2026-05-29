/*
===========================================
Question 06:
Function pointer as argument
===========================================
*/

#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

void call(int (*ptr)(int, int))
{
    printf("Result = %d", ptr(10, 20));
}

int main()
{
    call(add);

    return 0;
}

/*
OUTPUT:
Result = 30
*/