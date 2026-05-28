# 📄 07_cube_program.c

```c id="ntbg4x"
/*
===========================================
Question:
Write a C program to find
cube of a number.
===========================================
*/

#include<stdio.h>
#include<math.h>

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    printf("Cube = %.2f", pow(n,3));
}

/*
--------------- OUTPUT ----------------

Enter Number: 3
Cube = 27.00

---------------------------------------
*/
```
