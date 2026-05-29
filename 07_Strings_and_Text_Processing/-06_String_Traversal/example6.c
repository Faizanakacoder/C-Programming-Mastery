/*
===========================================
Question 06:
Write a C program to search element using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, key, flag = 0;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(*(p + i) == key)
            flag = 1;
    }

    if(flag)
        printf("Found");
    else
        printf("Not Found");
}

/*
OUTPUT:
Found
*/