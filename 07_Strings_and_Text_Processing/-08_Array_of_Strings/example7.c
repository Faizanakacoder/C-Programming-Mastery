/*
===========================================
Question 07:
Write a C program to find shortest string
from array of strings.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char names[3][20];
    int i, min, index = 0;

    printf("Enter 3 Strings:\n");

    for(i = 0; i < 3; i++)
    {
        gets(names[i]);
    }

    min = strlen(names[0]);

    for(i = 1; i < 3; i++)
    {
        if(strlen(names[i]) < min)
        {
            min = strlen(names[i]);
            index = i;
        }
    }

    printf("Shortest String = %s", names[index]);
}

/*
OUTPUT:
Enter 3 Strings:
PROGRAMMING
RAM
COMPUTER

Shortest String = RAM
*/