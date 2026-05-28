# 📄 04_ceil_function.c

```c id="9t1i7f"
/*
===========================================
Question:
Write a C program to round
number upward using ceil().
===========================================
*/

#include<stdio.h>
#include<math.h>

void main()
{
    float n;

    printf("Enter Number: ");
    scanf("%f",&n);

    printf("Ceil Value = %.2f", ceil(n));
}

/*
--------------- OUTPUT ----------------

Enter Number: 4.2
Ceil Value = 5.00

---------------------------------------
*/
```
