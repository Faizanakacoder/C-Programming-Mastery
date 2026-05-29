/*
===========================================
Question 08:
Write a C program to compare two
command line arguments.
===========================================
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    if(strcmp(argv[1], argv[2]) == 0)
    {
        printf("Arguments are Equal");
    }
    else
    {
        printf("Arguments are Not Equal");
    }

    return 0;
}

/*
OUTPUT:
Input:
program.exe HELLO HELLO

Output:
Arguments are Equal
*/