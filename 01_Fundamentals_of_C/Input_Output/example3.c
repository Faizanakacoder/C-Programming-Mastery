/*
========================================
Program : Addition of Two Numbers
Topic   : Input and Output
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d", sum);

    return 0;
}