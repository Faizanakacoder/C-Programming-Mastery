/*
===========================================
Question 03:
Write a C program to count string length
using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    char *ptr;
    int count = 0;

    printf("Enter String: ");
    gets(str);

    ptr = str;

    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }

    printf("Length = %d", count);
}

/*
OUTPUT:
Enter String: PROGRAM
Length = 7
*/