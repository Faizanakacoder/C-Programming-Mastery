/*
===========================================
Question:
Reverse a number using function.
===========================================
*/

#include <stdio.h>

void reverse(int n)
{
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("Reverse = %d\n", rev);
}

int main()
{
    reverse(1234);
    return 0;
}