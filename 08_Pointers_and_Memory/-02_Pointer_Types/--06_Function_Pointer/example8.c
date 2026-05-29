/*
===========================================
Question 08:
Menu using function pointer
===========================================
*/

#include<stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main()
{
    int (*ptr)(int, int);

    ptr = add;
    printf("Add = %d\n", ptr(10, 5));

    ptr = sub;
    printf("Sub = %d", ptr(10, 5));

    return 0;
}

/*
OUTPUT:
Add = 15
Sub = 5
*/