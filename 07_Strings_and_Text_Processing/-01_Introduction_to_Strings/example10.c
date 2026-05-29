/*
===========================================
Question 10:
Write a C program to display string in reverse order.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int i;

    printf("Enter String: ");
    scanf("%s", str);

    for(i = strlen(str)-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

/*
OUTPUT:
Enter String: HELLO
OLLEH
*/