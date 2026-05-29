/*
===========================================
Question 03:
Write a C program to concatenate two strings
using strcat().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100], str2[100];

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    strcat(str1, str2);

    printf("Concatenated String = %s", str1);
}

/*
OUTPUT:
Enter First String: HELLO
Enter Second String: WORLD
Concatenated String = HELLOWORLD
*/