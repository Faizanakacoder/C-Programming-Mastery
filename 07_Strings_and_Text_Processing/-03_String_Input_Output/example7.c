/*
===========================================
Question 07:
Write a C program to input and display multiple strings.
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[20], str2[20];

    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);

    printf("First = %s\n", str1);
    printf("Second = %s", str2);
}

/*
OUTPUT:
Enter First String: HELLO
Enter Second String: WORLD
First = HELLO
Second = WORLD
*/