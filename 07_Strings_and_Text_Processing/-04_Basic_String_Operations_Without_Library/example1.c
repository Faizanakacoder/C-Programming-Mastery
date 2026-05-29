/*
===========================================
Question 01:
Write a C program to find length of string
without using library function.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Length = %d", count);
}

/*
OUTPUT:
Enter String: HELLO
Length = 5
*/