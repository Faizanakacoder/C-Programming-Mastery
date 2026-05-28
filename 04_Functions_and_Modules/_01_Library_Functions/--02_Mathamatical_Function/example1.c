# 📄 01_square_root.c

```c id="ggg7fy"
/*
===========================================
Question:
Write a C program to find square
root of a number using sqrt().
===========================================
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    printf("Square Root = %.2f", sqrt(n));
}

/*
--------------- OUTPUT ----------------

Enter Number: 25
Square Root = 5.00

---------------------------------------
*/
```
