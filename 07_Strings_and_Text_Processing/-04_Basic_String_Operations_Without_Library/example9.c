/*
===========================================
Question 09:
Write a C program to convert uppercase string
to lowercase without library function.
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