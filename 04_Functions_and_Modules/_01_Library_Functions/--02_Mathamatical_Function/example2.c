# 📄 02_power_function.c

```c id="b2t11d"
/*
===========================================
Question:
Write a C program to calculate
power using pow() function.
===========================================
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int a,b;

    printf("Enter Base: ");
    scanf("%d",&a);

    printf("Enter Power: ");
    scanf("%d",&b);

    printf("Result = %.2f", pow(a,b));
}

/*
--------------- OUTPUT ----------------

Enter Base: 2
Enter Power: 3
Result = 8.00

---------------------------------------
*/
```
