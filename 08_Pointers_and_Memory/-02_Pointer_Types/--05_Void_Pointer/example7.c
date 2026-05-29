/*
===========================================
Question 07:
Write a C program using
user input with void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num;

    // Void pointer declaration
    void *ptr = &num;

    // User input
    printf("Enter Number: ");
    scanf("%d", &num);

    // Display entered value
    printf("Entered Value = %d", *(int *)ptr);
}

/*
OUTPUT:
Enter Number: 45
Entered Value = 45
*/