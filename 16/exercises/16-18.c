/*  Name: 16-18.c
    Purpose: Exercise 16-18
    Author: NiceMan1337
    Date: 02.10.2022  */

#include <stdio.h>

/*(a)*/
enum Piece {PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY};
enum Color {WHITE, BLACK};

/*(b)*/
typedef struct {
    enum Piece;
    enum Color;
} Square;

/*(c) and (d)*/
Square board[8][8] = {
    {{ROOK,  WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE},
     {KING,  WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK,  WHITE}},
    {{PAWN,  WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,  WHITE},
     {PAWN,  WHITE}, {PAWN,   WHITE}, {PAWN,   WHITE}, {PAWN,  WHITE}},
    {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK},
     {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK},
     {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK},
     {EMPTY, BLACK}, {EMPTY,  BLACK}, {EMPTY,  BLACK}, {EMPTY, BLACK}},
    {{PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK},
     {PAWN,  BLACK}, {PAWN,   BLACK}, {PAWN,   BLACK}, {PAWN,  BLACK}},
    {{ROOK,  BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK},
     {KING,  BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK,  BLACK}},
};

int main(void)
{

    return 0;
}