/*
===========================================
Question:
Write a C program to print
table using No Argument
No Return function.
===========================================
*/

#include<stdio.h>

void table();

void main()
{
    table();
}

void table()
{
    int n,i;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}

/*
--------------- OUTPUT ----------------

Enter Number: 2

2 x 1 = 2
2 x 2 = 4
2 x 3 = 6

---------------------------------------
*/