/*
===========================================
Question 02:
Write a C program to traverse string
using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    char *ptr;

    printf("Enter String: ");
    gets(str);

    ptr = str;

    while(*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }
}

/*
OUTPUT:
Enter String: HELLO
H E L L O
*/