/*
===========================================
Question:
Write a C program to find
factorial using No Argument
No Return function.
===========================================
*/

#include<stdio.h>

void factorial();

void main()
{
    factorial();
}

void factorial()
{
    int n,i,fact=1;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d",fact);
}

/*
--------------- OUTPUT ----------------

Enter Number: 5
Factorial = 120

---------------------------------------
*/