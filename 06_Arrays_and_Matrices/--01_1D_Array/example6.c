/*
===========================================
Question:
Write a C program for linear search.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, key, flag = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Found");
    else
        printf("Not Found");
}

/*
OUTPUT:
Enter key: 3
Found
*/