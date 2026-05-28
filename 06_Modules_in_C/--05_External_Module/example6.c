/*
===========================================
Question: 06
Write a program using extern for bank system.
===========================================
*/

#include<stdio.h>

int balance = 1000;

void deposit()
{
    extern int balance;
    balance += 500;
}

void main()
{
    deposit();
    printf("Balance = %d", balance);
}

/*
OUTPUT:
Balance = 1500
*/