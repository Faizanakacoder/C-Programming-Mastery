/*
===========================================
Question 03:
Write a C program to concatenate two strings
without using strcat().
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated String = %s", str1);
}

/*
OUTPUT:
Enter First String: HELLO
Enter Second String: WORLD
Concatenated String = HELLOWORLD
*/