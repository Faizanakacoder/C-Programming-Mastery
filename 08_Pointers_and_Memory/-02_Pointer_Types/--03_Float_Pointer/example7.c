/*
===========================================
Question 07:
Write a C program using
float pointer with user input.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variable
    float num;

    // Pointer declaration
    float *ptr = &num;

    // User input
    printf("Enter Float Value: ");
    scanf("%f", &num);

    // Display value
    printf("Entered Value = %.2f", *ptr);
}

/*
OUTPUT:
Enter Float Value: 12.5
Entered Value = 12.50
*/