/*
===========================================
Question 01:
Write a C program to display all
command line arguments.
===========================================
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}

/*
OUTPUT:
program.exe
HELLO
123
*/