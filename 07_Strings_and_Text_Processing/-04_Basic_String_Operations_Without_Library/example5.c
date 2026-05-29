/*
===========================================
Question 05:
Write a C program to reverse a string
without using strrev().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        length++;
        i++;
    }

    for(i = length-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

/*
OUTPUT:
Enter String: HELLO
OLLEH
*/