/*
===========================================
Question 05:
Write a C program to compare strings
using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[100], str2[100];
    char *ptr1, *ptr2;
    int flag = 1;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    ptr1 = str1;
    ptr2 = str2;

    while(*ptr1 != '\0' || *ptr2 != '\0')
    {
        if(*ptr1 != *ptr2)
        {
            flag = 0;
            break;
        }

        ptr1++;
        ptr2++;
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