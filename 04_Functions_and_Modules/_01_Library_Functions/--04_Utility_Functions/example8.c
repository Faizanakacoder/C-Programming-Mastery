# 📄 08_atof_function.c

/*
===========================================
Question:
Write a C program to convert
string into float using atof().
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    char str[] = "12.5";

    float n;

    n = atof(str);

    printf("Float Value = %.2f", n);
}

/*
--------------- OUTPUT ----------------

Float Value = 12.50

---------------------------------------
*/
```
