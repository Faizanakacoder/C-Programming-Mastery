# 📄 10_lowercase_conversion.c

/*
===========================================
Question:
Write a C program to convert
string into lowercase.
===========================================
*/

#include<stdio.h>
#include<ctype.h>

void main()
{
    char str[100];
    int i;

    printf("Enter String: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase String = %s", str);
}

/*
--------------- OUTPUT ----------------

Enter String: HELLO
Lowercase String = hello

---------------------------------------
