/*
===========================================
Question 10:
Write a C program for pointer-based string traversal.
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