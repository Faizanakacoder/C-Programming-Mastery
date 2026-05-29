/*
===========================================
Question 08:
Write a C program to copy array of strings.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[3][20], str2[3][20];
    int i;

    printf("Enter 3 Strings:\n");

    for(i = 0; i < 3; i++)
    {
        gets(str1[i]);
    }

    for(i = 0; i < 3; i++)
    {
        strcpy(str2[i], str1[i]);
    }

    printf("\nCopied Strings:\n");

    for(i = 0; i < 3; i++)
    {
        puts(str2[i]);
    }
}

/*
OUTPUT:
Enter 3 Strings:
RAM
AMAN
SOHAN

Copied Strings:
RAM
AMAN
SOHAN
*/