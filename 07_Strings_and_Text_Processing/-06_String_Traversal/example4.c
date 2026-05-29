/*
===========================================
Question 04:
Write a C program to count total characters
using traversal.
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

    printf("Total Characters = %d", count);
}

/*
OUTPUT:
Enter String: HELLO
Total Characters = 5
*/