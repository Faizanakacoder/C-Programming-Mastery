# 📄 08_maximum_number.c

```c id="63x7q8"
/*
===========================================
Question:
Write a C program to find
maximum of two numbers.
===========================================
*/

#include<stdio.h>

void main()
{
    int a,b;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("Maximum = %d", a);
    else
        printf("Maximum = %d", b);
}

/*
--------------- OUTPUT ----------------

Enter Two Numbers: 10 25
Maximum = 25

---------------------------------------
*/
```
