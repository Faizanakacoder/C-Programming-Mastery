/*
===========================================
Question 10:
Write a C program to compare scanf() and gets() input.
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[50], str2[50];

    printf("Enter String using scanf: ");
    scanf("%s", str1);

    getchar();

    printf("Enter String using gets: ");
    gets(str2);

    printf("\nscanf Input = %s", str1);
    printf("\ngets Input = %s", str2);
}

/*
OUTPUT:
Enter String using scanf: Hello World
Enter String using gets: Hello World

scanf Input = Hello
gets Input = Hello World
*/