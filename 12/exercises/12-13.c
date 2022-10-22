/*  Name: 12-13.c
    Purpose: Exercise 12-13
    Author: Piotr Marendowski
    Date: 28.07.2022  */

#include <stdio.h>

#define N 10

int main(void)
{
    double ident[N][N], *p;
    int row, col, counter = 11;

    /*processing the elements of a multidimensional array
    think of it as one dimensional array
    and process them one after the other
    using pointer to an array
    every 1 have 10 spaces between another
    we need to process them too (12 = 0 -> 11)
    in order to get a result*/
    for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++)
    {
        if (counter == 11)
        {
            *p = 1.0;
            counter = 0.0;
        }
        else
            *p = 0.0;

        counter++;
    }

    for (row = 0; row < N; row++)
    {    
        for(col = 0; col < N; col++)
        {
            printf("%.0f ", ident[row][col]);
        }
        printf("\n");
    }

    return 0;
}