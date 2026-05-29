/*
===========================================
Question 01:
Write a C program for forward string traversal.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        printf("%c ", str[i]);
        i++;
    }
}

/*
OUTPUT:
Enter String: HELLO
H E L L O
*/