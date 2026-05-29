/*
===========================================
Question 09:
Array of function pointers
===========================================
*/

#include<stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main()
{
    int (*ptr[2])(int, int) = {add, sub};

    printf("Add = %d\n", ptr[0](10, 20));
    printf("Sub = %d", ptr[1](20, 10));

    return 0;
}

/*
OUTPUT:
Add = 30
Sub = 10
*/