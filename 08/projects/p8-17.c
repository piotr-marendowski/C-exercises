/*  Name: p8-17.c
    Purpose: Prints magic circle.
    Author: Piotr Marendowski
    Date: 01.06.2022  */

#include <stdio.h>
#include <ctype.h>

int main(void)
{ 
    /*declare variables
    x, y - for current numbers
    x2, y2 - for previous numbers*/
    int i, j, n, x, y, x2, y2;

    /*ask for a size of the array C99 REQUIRED!*/
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    /*store zeros in an array*/
    int square[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }
    
    /*you can't assign x's value, because if
    user enters e.g. 10, it won't be in the middle*/
    x = n / 2; 
    y = 0;
    square[x][y] = 1;

    /*start from 2*/
    i = 2;
    while (i <= n * n) {
        x2 = x;
        y2 = y;
        if (x2 + 1 >= n)
            x = 0;
        else 
            x = x2 + 1;
        if (y2 - 1 < 0)
            y = n - 1;
        else 
            y = y2 - 1;
        
        if (square[x][y] == 0) {
            square[x][y] = i++;
        } else {
            if (y2 + 1 >= n)
                square[x = x2][y = 0] = i++;
            else
                square[x = x2][y = y2 + 1] = i++;
        }
    }
     
    /*print the magic square*/
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%5d", square[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}