/*
===========================================
Question 06:
Write a C program to reverse a string
passed as command line argument.
===========================================
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int i, length;

    length = strlen(argv[1]);

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", argv[1][i]);
    }

    return 0;
}

/*
OUTPUT:
Input:
program.exe HELLO

Output:
OLLEH
*/