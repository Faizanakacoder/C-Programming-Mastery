/*
===========================================
Question 03:
Write a C program to count vowels and consonants.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        if((str[i]>='A' && str[i]<='Z') ||
           (str[i]>='a' && str[i]<='z'))
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||
               str[i]=='O'||str[i]=='U'||str[i]=='a'||
               str[i]=='e'||str[i]=='i'||str[i]=='o'||
               str[i]=='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);
}

/*
OUTPUT:
Enter String: HELLO
Vowels = 2
Consonants = 3
*/