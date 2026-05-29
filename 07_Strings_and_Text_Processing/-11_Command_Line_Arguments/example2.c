/*
===========================================
Question 02:
Write a C program to count total
command line arguments.
===========================================
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Total Arguments = %d", argc);

    return 0;
}

/*
OUTPUT:
Total Arguments = 3
*/