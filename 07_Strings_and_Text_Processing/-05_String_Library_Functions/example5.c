/*
===========================================
Question 05:
Write a C program to reverse string
using strrev().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    strrev(str);

    printf("Reversed String = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
Reversed String = OLLEH
*/