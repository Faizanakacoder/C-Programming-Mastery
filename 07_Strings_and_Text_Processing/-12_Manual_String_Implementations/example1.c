/*
===========================================
Question 01:
Write a C program to find string length
manually without using strlen().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("String Length = %d", count);
}

/*
OUTPUT:
Enter String: HELLO
String Length = 5
*/