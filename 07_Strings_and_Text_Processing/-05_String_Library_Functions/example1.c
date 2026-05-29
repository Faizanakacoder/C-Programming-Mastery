/*
===========================================
Question 01:
Write a C program to find string length
using strlen().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    printf("Length = %d", strlen(str));
}

/*
OUTPUT:
Enter String: HELLO
Length = 5
*/