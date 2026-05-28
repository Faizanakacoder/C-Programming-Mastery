/*
===========================================
Question 06:
Write a C program to search element using function.
===========================================
*/

#include<stdio.h>

void search(int arr[], int size, int key)
{
    int i, flag = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
            flag = 1;
    }

    if(flag)
        printf("Found");
    else
        printf("Not Found");
}

void main()
{
    int arr[5], i, key;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    search(arr, 5, key);
}

/*
OUTPUT:
Found
*/