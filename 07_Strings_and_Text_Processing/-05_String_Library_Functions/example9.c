/*
===========================================
Question 09:
Write a C program to search substring
using strstr().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100], str2[100];

    printf("Enter Main String: ");
    gets(str1);

    printf("Enter Substring: ");
    gets(str2);

    if(strstr(str1, str2) != NULL)
        printf("Substring Found");
    else
        printf("Substring Not Found");
}

/*
OUTPUT:
Enter Main String: HELLO WORLD
Enter Substring: WORLD
Substring Found
*/