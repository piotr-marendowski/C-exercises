/*  Name: 5-4.c
    Purpose: Exercise 5-4.
    Author: Piotr Marendowski
    Date: 23.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int j, i;

    printf("Enter two values:");
    scanf("%d %d", &i, &j);

    printf("%d\n", (i > j) - (i < j));
    
    return 0;
}