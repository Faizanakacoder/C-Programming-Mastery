/*
===========================================
Question 09:
Write a C program to convert command line
argument into uppercase.
===========================================
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    while(argv[1][i] != '\0')
    {
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            argv[1][i] = argv[1][i] - 32;
        }

        i++;
    }

    printf("Uppercase String = %s", argv[1]);

    return 0;
}

/*
OUTPUT:
Input:
program.exe hello

Output:
Uppercase String = HELLO
*/