/*
===========================================
Question 07:
Write a C program to count vowels in string
without using library function.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, vowels = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||
           str[i]=='O' || str[i]=='U' ||
           str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u')
        {
            vowels++;
        }

        i++;
    }

    printf("Total Vowels = %d", vowels);
}

/*
OUTPUT:
Enter String: HELLO
Total Vowels = 2
*/