# 📄 06_square_program.c

```c id="y0j9v2"
/*
===========================================
Question:
Write a C program to find
square of a number.
===========================================
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    printf("Square = %.2f", pow(n,2));
}

/*
--------------- OUTPUT ----------------

Enter Number: 5
Square = 25.00

---------------------------------------
*/
```
