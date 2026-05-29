/*
===========================================
Question 08:
Write a C program to count characters in string.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[50];
    int i = 0, count = 0;

    printf("Enter String: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Total Characters = %d", count);
}

/*
OUTPUT:
Enter String: HELLO
Total Characters = 5
*/