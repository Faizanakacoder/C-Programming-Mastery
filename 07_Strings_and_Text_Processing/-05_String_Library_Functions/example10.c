/*
===========================================
Question 10:
Write a C program demonstrating multiple
string library functions.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100] = "HELLO";
    char str2[100] = "WORLD";

    printf("Length = %d\n", strlen(str1));

    strcat(str1, str2);

    printf("Concatenated = %s\n", str1);

    strrev(str1);

    printf("Reversed = %s", str1);
}

/*
OUTPUT:
Length = 5
Concatenated = HELLOWORLD
Reversed = DLROWOLLEH
*/