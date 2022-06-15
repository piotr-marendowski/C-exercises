/*  Name: 9-13.c
    Purpose: Exercise 9-13.
    Author: NiceMan1337
    Date: 15.06.2022  */

#include <stdio.h>
#include <ctype.h>

int evaluate_position(char board[8][8]);

int main(void)
{
    char board[8][8]; 

    printf("Position: %d\n", evaluate_position(board));

    return 0;
}

int evaluate_position(char board[8][8])
{
    int i, white = 0, black = 0;
    char pieces[] = {'K', 'Q', 'R', 'B', 'M', 'P'};

    for (i = 0; i < 6; i++)
    {
        switch (pieces[i])
        {
        case 'Q':
            white += 9;
            black += 9;
            break;
        case 'R':
            white += 5;
            black += 5;
            break;
        case 'B':
            white += 3;
            black += 3;
            break;
        case 'N':
            white += 3;
            black += 3;
            break;
        case 'P':
            white += 1;
            black += 1;
            break;
        default:
            break;
        }
    }
    return white - black; 
}