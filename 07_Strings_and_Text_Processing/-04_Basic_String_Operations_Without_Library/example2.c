/*
===========================================
Question 02:
Write a C program to copy one string into another
without using strcpy().
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter String: ");
    gets(str1);

    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("Copied String = %s", str2);
}

/*
OUTPUT:
Enter String: HELLO
Copied String = HELLO
*/