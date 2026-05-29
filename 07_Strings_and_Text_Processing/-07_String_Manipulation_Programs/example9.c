/*
===========================================
Question 09:
Write a C program to remove duplicate characters
from string.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i, j, k;

    printf("Enter String: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; )
        {
            if(str[i] == str[j])
            {
                for(k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }

    printf("String After Removing Duplicates = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
String After Removing Duplicates = HELO
*/