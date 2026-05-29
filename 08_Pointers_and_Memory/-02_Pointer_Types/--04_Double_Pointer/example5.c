/*
===========================================
Question 05:
Write a C program to modify
value using double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int num = 10;

    // Pointer declaration
    int *ptr = &num;

    // Double pointer declaration
    int **dptr = &ptr;

    // Modify value
    **dptr = 500;

    // Display modified value
    printf("Modified Value = %d", num);
}

/*
OUTPUT:
Modified Value = 500
*/