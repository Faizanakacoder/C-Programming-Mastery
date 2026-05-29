/*
===========================================
Question 04:
Write a C program to count special characters.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, special = 0;

    printf("Enter Text: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(!(str[i]>='A' && str[i]<='Z') &&
           !(str[i]>='a' && str[i]<='z') &&
           !(str[i]>='0' && str[i]<='9') &&
           str[i] != ' ')
        {
            special++;
        }

        i++;
    }

    printf("Special Characters = %d", special);
}

/*
OUTPUT:
Enter Text: HELLO@123#
Special Characters = 2
*/