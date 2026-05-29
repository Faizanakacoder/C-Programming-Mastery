/*
===========================================
Question 08:
Write a C program using
user input with double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num;

    // Pointer declaration
    int *ptr = &num;

    // Double pointer declaration
    int **dptr = &ptr;

    // User input
    printf("Enter Number: ");
    scanf("%d", &num);

    // Display entered value
    printf("Entered Value = %d", **dptr);
}

/*
OUTPUT:
Enter Number: 25
Entered Value = 25
*/