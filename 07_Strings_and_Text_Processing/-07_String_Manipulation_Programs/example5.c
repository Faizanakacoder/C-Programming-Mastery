/*
===========================================
Question 05:
Write a C program to convert string into lowercase.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("Lowercase String = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
Lowercase String = hello
*/