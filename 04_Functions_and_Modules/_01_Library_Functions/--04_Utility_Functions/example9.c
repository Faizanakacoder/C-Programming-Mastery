# 📄 09_dynamic_memory.c

/*
===========================================
Question:
Write a C program to store
array values using dynamic memory.
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr,i;

    ptr = (int*)malloc(3*sizeof(int));

    for(i=0;i<3;i++)
    {
        printf("Enter Number: ");
        scanf("%d",&ptr[i]);
    }

    printf("Array Elements:\n");

    for(i=0;i<3;i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
}

/*
--------------- OUTPUT ----------------

Enter Number: 10
Enter Number: 20
Enter Number: 30

Array Elements:
10
20
30

---------------------------------------
*/
```
