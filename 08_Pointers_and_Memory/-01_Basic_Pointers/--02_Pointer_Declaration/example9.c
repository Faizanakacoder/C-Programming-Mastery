/*
===========================================
Question 09:
Write a C program demonstrating
different pointer types.
===========================================
*/

#include<stdio.h>

void main()
{
    int a = 10;
    char ch = 'B';
    float num = 5.5;

    int *p1 = &a;
    char *p2 = &ch;
    float *p3 = &num;

    printf("Integer = %d\n", *p1);

    printf("Character = %c\n", *p2);

    printf("Float = %.2f", *p3);
}

/*
OUTPUT:
Integer = 10
Character = B
Float = 5.50
*/