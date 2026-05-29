/*
===========================================
Question 06:
Write a C program to convert string into uppercase
using strupr().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    strupr(str);

    printf("Uppercase String = %s", str);
}

/*
OUTPUT:
Enter String: hello
Uppercase String = HELLO
*/