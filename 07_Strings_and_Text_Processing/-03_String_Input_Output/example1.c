/*
===========================================
Question 01:
Write a C program to input string using scanf().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[50];

    printf("Enter String: ");
    scanf("%s", str);

    printf("String = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
String = HELLO
*/