/*  Name: 8-10.c
    Purpose: Exercise 8-10.
    Author: Piotr Marendowski
    Date: 15.05.2022  */

#include <stdio.h>

int main(void)
{ 
    char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                              {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                              {0, '.', 0, '.', 0, '.', 0, '.'},
                              {'.', 0, '.', 0, '.', 0, '.'},
                              {0, '.', 0, '.', 0, '.', 0, '.'},
                              {'.', 0, '.', 0, '.', 0, '.'},
                              {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                              {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    return 0;
}