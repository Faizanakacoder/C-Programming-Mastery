/*
===========================================
Question:
Write a C program to find
area of circle using No Argument
No Return function.
===========================================
*/

#include<stdio.h>

void area();

void main()
{
    area();
}

void area()
{
    float r,a;

    printf("Enter Radius: ");
    scanf("%f",&r);

    a = 3.14 * r * r;

    printf("Area = %.2f",a);
}

/*
--------------- OUTPUT ----------------

Enter Radius: 5
Area = 78.50

---------------------------------------
*/