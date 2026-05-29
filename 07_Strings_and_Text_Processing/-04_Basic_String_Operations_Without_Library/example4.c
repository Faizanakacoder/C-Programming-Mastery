/*
===========================================
Question 04:
Write a C program to compare two strings
without using strcmp().
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[100], str2[100];
    int i = 0, flag = 1;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            flag = 0;
            break;
        }

        i++;
    }

    if(flag == 1)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}

/*
OUTPUT:
Enter First String: HELLO
Enter Second String: HELLO
Strings are Equal
*/