# 📄 05_floor_function.c

```c id="i0bn8g"
/*
===========================================
Question:
Write a C program to round
number downward using floor().
===========================================
*/

#include<stdio.h>
#include<math.h>

void main()
{
    float n;

    printf("Enter Number: ");
    scanf("%f",&n);

    printf("Floor Value = %.2f", floor(n));
}

/*
--------------- OUTPUT ----------------

Enter Number: 4.9
Floor Value = 4.00

---------------------------------------
*/
```
