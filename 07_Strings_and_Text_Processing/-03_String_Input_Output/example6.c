/*
===========================================
Question 06:
Write a C program to input string using fgets().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    printf("String = %s", str);
}

/*
OUTPUT:
Enter String: Hello World
String = Hello World
*/