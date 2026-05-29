/*
===========================================
Question 07:
Write a C program to find length of
command line argument.
===========================================
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    printf("Length = %d", strlen(argv[1]));

    return 0;
}

/*
OUTPUT:
Input:
program.exe PROGRAM

Output:
Length = 7
*/