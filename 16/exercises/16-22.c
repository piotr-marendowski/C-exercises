/*  Name: 16-22.c
    Purpose: Exercise 16-22
    Author: NiceMan1337
    Date: 02.10.2022  */

#include <stdio.h>

int main(void)
{
    enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

    /*(a)*/
    const int piece_value[] = {200, 9, 5, 3, 3, 1};

    /*(b) C99!*/
    const int piece_value[] = {
        [KING] = 200,
        [QUEEN] = 9,
        [ROOK] = 5,
        [BISHOP] = 3,
        [KNIGHT] = 3,
        [PAWN] = 1
    };

    return 0;
}