/*  Name: p8-07.c
    Purpose: Calculates sums of row and columns.
    Author: Piotr Marendowski
    Date: 20.05.2022  */

#include <stdio.h>

#define LENGTH_ROWS 5

int main(void)
{ 
    /*declare variables*/
    int rows[5][5] = {0}, i, j, n;

    /*ask and calculate rows and columns*/
    for (i = 0; i < LENGTH_ROWS; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < LENGTH_ROWS; j++) {
           scanf("%d", &rows[i][j]);
        }
    }
    
    printf("Row totals: ");
    for (i = 0; i < LENGTH_ROWS; i++) {
        n = 0;
        for (j = 0; j < LENGTH_ROWS; j++) {
            n += rows[i][j];
        }
        printf("%d ", n);
    }
    printf("\nColumn totals: ");
    for (i = 0; i < LENGTH_ROWS; i++) {
        n = 0;
        for (j = 0; j < LENGTH_ROWS; j++) {
            n += rows[j][i];
        }
        printf("%d ", n);
    }
    
    
    return 0;
}