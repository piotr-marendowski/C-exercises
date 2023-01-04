/*  Name: 5-6.c
    Purpose: Exercise 5-6.
    Author: Piotr Marendowski
    Date: 23.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int n;

    printf("Enter a value: ");
    scanf("%d", &n);

    if (n == 1-10)
        printf("n is between 1 and 10\n");
    
    return 0;
}

/*Solution:
It is legal, and it won't output printf,
but if you assign -9 it will print out,
because it calculates 1-10 first so
you need to make it equal*/