/*
===========================================
Question 10:
Callback simulation using function pointer
===========================================
*/

#include<stdio.h>

void hello()
{
    printf("Hello from function pointer");
}

void call(void (*ptr)())
{
    ptr();
}

int main()
{
    call(hello);

    return 0;
}

/*
OUTPUT:
Hello from function pointer
*/