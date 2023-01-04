/*  Name: 5-5.c
    Purpose: Exercise 5-5.
    Author: Piotr Marendowski
    Date: 23.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int n;

    printf("Enter a value: ");
    scanf("%d", &n);

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");
    
    return 0;
}

/*Solution:
It is legal, but in any case it will output printf,
because of the left statement (<= 10) being true*/