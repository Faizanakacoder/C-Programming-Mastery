/*
===========================================
Question 06:
Write a C program to find longest string
from array of strings.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char names[3][20];
    int i, max = 0, index = 0;

    printf("Enter 3 Strings:\n");

    for(i = 0; i < 3; i++)
    {
        gets(names[i]);
    }

    for(i = 0; i < 3; i++)
    {
        if(strlen(names[i]) > max)
        {
            max = strlen(names[i]);
            index = i;
        }
    }

    printf("Longest String = %s", names[index]);
}

/*
OUTPUT:
Enter 3 Strings:
RAM
PROGRAMMING
AMAN

Longest String = PROGRAMMING
*/