/*  Name: p6-06.c
    Purpose: Prints all even squares between number entered and 0.
    Author: Piotr Marendowski
    Date: 15.04.2022  */

#include <stdio.h>

int main(void)
{   
    /*declare variable*/
    int n, i, square = 0;

    /*ask user for input*/
    printf("Enter a number: ");
    scanf("%d", &n);

    /*calculate square*/
    for (i = 1; square < n; i++) {
        square = i * i;
        if (square <= n && square % 2 == 0) {
            printf("%d\n", square);
        }
    }
    return 0;
}

/*Description:
Without 'square <=' it doesn't work like it should,
see williamgherman/c-solutions for easier solution.*/