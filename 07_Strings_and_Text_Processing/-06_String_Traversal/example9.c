/*
===========================================
Question 09:
Write a C program to print alternate characters
from string.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i;

    printf("Enter String: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i = i + 2)
    {
        printf("%c ", str[i]);
    }
}

/*
OUTPUT:
Enter String: HELLO
H L O
*/