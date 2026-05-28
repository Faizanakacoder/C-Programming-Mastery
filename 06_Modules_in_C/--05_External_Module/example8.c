/*
===========================================
Question: 08
Write a program using extern configuration value.
===========================================
*/

#include<stdio.h>

int config = 50;

void show()
{
    extern int config;
    printf("Config = %d", config);
}

void main()
{
    show();
}

/*
OUTPUT:
Config = 50
*/