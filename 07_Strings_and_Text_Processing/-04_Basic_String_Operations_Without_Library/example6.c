/*
===========================================
Question 06:
Write a C program to check palindrome string
without using library function.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter String: ");
    gets(str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length/2; i++)
    {
        if(str[i] != str[length-1-i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome String");
    else
        printf("Not Palindrome");
}

/*
OUTPUT:
Enter String: MADAM
Palindrome String
*/