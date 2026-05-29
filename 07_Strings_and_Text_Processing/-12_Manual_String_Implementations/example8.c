/*
===========================================
Question 08:
Write a C program to convert string
into uppercase manually.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    printf("Uppercase String = %s", str);
}

/*
OUTPUT:
Enter String: hello
Uppercase String = HELLO
*/