/*  Name: p9-08.c
    Purpose: Game of craps.
    Author: Piotr Marendowski
    Date: 20.06.2022  */

#include <stdio.h>
#include <stdbool.h> /*C99 required*/
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

bool play_game(void);
int roll_dice(void);

int main(void)
{
    /*declare variables*/
    int wins = 0, losses = 0;
    char ch;
    srand((unsigned) time(NULL));

    /*call play_game in loop*/
    while (1)
    {
        if (play_game())
        {
            printf("You win!\n");
            wins++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        }
        printf("Play again? ");

        if (toupper((ch = getchar())) != 'Y')
            break;
    }

    printf("Wins: %d Losses: %d\n", wins, losses); 
    return 0;
}

bool play_game(void)
{
    /*call roll_dice and assign its value to sum*/
    int point;
    int sum = roll_dice();
    printf("You rolled: %d\n", sum);

    /*check for the first roll*/
    switch (sum)
    {
    case 7: case 11:
        return true;
    case 2: case 3: case 12:
        return false;
    default:
        point = sum;
        break;
    }
    printf("Your point: %d\n", point);

    /*next rolls*/
    while (sum != 7)
    {
        sum = roll_dice();
        printf("You rolled: %d\n", sum);

        if (sum == point)
            return true;
    }
    return false;
}

int roll_dice(void)
{
    int dice1 = 0, dice2 = 0, sum;

    /*assign random values to dices and sum them*/
    dice1 = rand() % 6;
    dice2 = rand() % 6;
    return sum = dice1 + dice2 + 2;
}