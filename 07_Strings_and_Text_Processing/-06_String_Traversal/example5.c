/*
===========================================
Question 05:
Write a C program to count digits in string
using traversal.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, digits = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }

        i++;
    }

    printf("Total Digits = %d", digits);
}

/*
OUTPUT:
Enter String: ABC123
Total Digits = 3
*/