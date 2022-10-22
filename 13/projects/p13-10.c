/*  Name: p13-10.c
    Purpose: Displays name differently.
    Author: Piotr Marendowski
    Date: 24.08.2022  */

#include <stdio.h>

void reverse_name(char *name);

int main(void)
{
    char name[30] = "", ch;
    int i = 0;

    printf("Enter a first and last name: ");
    while((ch = getchar()) != '\n')
        name[i++] = ch;

    reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
    char *p = name, initial;

    while (*p == ' ')
        p++;
    initial = *p++;

    while (*p && *p++ != ' ')
        ;

    while (*p && *p != '\n')
        putchar(*p++);
    printf(", %c.\n", initial);
}