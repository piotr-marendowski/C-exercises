/*  Name: p9-03.c
    Purpose: Modified project 9 from chapter 8.
    Author: NiceMan1337
    Date: 18.06.2022  */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generate_random_walk(char board[10][10]);
void print_array(char board[10][10]);

int main(void)
{
    /*declare variables*/ 
    char board[10][10] = {"."};

    /*call functions*/
    generate_random_walk(board);
    print_array(board);
    
    return 0;
}

void generate_random_walk(char board[10][10])
{
    /*declare variables*/
    char ch = 'A';
    int i = 0, j = 0, up = 0, down = 0, left = 0, right = 0, move = 0;

    /*calculate moves on board of zeros
    first check if you have free spaces around you (break if not)
    then compute random number
    then move next character
    repeat till not move is found or character is Z*/
    srand((unsigned) time(NULL));
    board[i][j] = ch++;

    while (ch <= 'Z') {
        up = down = left = right = move = 0;
        if (j + 1 < 10 && board[i][j + 1] == 0)
            up = 1;
        if (j - 1 >= 0 && board[i][j - 1] == 0)
            down = 1;
        if (i + 1 < 10 && board[i + 1][j] == 0)
            right = 1;
        if (i - 1 >= 0 && board[i - 1][j] == 0)
            left = 1;
        if (up + down + left + right == 0)
            break;
        move = rand() % 4;
        
        switch(move) {
            case 0:
                if (up) {
                    board[i][++j] = ch++;
                    break;
                }
            case 1:
                if (down) {
                    board[i][--j] = ch++;
                    break;
                }
            case 2:
                if (right) {
                    board[++i][j] = ch++;
                    break;
                }
            case 3:
                if (left) {
                    board[--i][j] = ch++;
                    break;
                }
            default:
                break;
        }
    }
}

void print_array(char board[10][10])
{
    int i, j;
    /*print the board and fill zeros left with dots*/
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (board[i][j] == 0) 
                board[i][j] = '.';
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

/*Description:
I changed name of the array from walk to board,
so it is the same as in my previous project. */