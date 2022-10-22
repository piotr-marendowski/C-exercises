/*  Name: 8-11.c
    Purpose: Exercise 8-11.
    Author: Piotr Marendowski
    Date: 15.05.2022  */

#include <stdio.h>

int main(void)
{ 
    int i, j = 0;
    char checker_board[8][8];

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}