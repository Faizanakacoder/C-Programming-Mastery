/*
===========================================
Question:
Write a C program to subtract two numbers.
===========================================
*/

#include <stdio.h>

void subtract(int a, int b)
{
    printf("Difference = %d\n", a - b);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    subtract(x, y);

    return 0;
}