/*
===========================================
Question 07:
Write a C program to convert string into lowercase
using strlwr().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    strlwr(str);

    printf("Lowercase String = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
Lowercase String = hello
*/