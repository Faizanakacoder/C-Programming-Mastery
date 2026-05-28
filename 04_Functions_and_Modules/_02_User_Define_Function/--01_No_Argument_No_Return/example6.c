/*
===========================================
Question:
Write a C program to check
even or odd using No Argument
No Return function.
===========================================
*/

#include<stdio.h>

void check();

void main()
{
    check();
}

void check()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}

/*
--------------- OUTPUT ----------------

Enter Number: 8
Even Number

---------------------------------------
*/