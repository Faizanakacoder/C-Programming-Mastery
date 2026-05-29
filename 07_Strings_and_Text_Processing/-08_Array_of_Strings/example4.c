/*
===========================================
Question 04:
Write a C program to search a name
in array of strings.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char names[5][20] =
    {
        "RAM",
        "AMAN",
        "SOHAN",
        "VIKAS",
        "ROHAN"
    };

    char search[20];
    int i, flag = 0;

    printf("Enter Name to Search: ");
    gets(search);

    for(i = 0; i < 5; i++)
    {
        if(strcmp(names[i], search) == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Name Found");
    else
        printf("Name Not Found");
}

/*
OUTPUT:
Enter Name to Search: AMAN
Name Found
*/