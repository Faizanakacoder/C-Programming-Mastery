/*
===========================================
Question 03:
Write a C program to input string using gets().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    printf("String = %s", str);
}

/*
OUTPUT:
Enter String: Hello World
String = Hello World
*/