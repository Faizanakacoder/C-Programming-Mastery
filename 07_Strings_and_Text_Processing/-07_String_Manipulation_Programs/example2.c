/*
===========================================
Question 02:
Write a C program to check palindrome string.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int i, length, flag = 1;

    printf("Enter String: ");
    gets(str);

    length = strlen(str);

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