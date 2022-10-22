/*  Name: 16-20.c
    Purpose: Exercise 16-20
    Author: Piotr Marendowski
    Date: 02.10.2022  */

#include <stdio.h>

int main(void)
{
    enum {NORTH, SOUTH, EAST, WEST} direction;
    int x, y;

    switch (direction)
    {
    case EAST:
        x++;
        break;
    case WEST:
        x--;
        break;
    case SOUTH:
        y++;
        break;
    case NORTH:
        x--;
        break;
    default:
        break;
    }

    return 0;
}