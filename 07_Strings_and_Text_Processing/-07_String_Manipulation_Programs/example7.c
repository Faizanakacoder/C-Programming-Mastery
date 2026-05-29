/*
===========================================
Question 07:
Write a C program to remove spaces from string.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100], newstr[100];
    int i = 0, j = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            newstr[j] = str[i];
            j++;
        }

        i++;
    }

    newstr[j] = '\0';

    printf("String Without Spaces = %s", newstr);
}

/*
OUTPUT:
Enter String: I LOVE C
String Without Spaces = ILOVEC
*/