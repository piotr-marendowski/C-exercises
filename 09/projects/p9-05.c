/*  Name: p9-05.c
    Purpose: Modified project 16 from chapter 8.
    Author: NiceMan1337
    Date: 18.06.2022  */

#include <stdio.h>
#include <ctype.h>

void create_magic_square(int n, char square[n][n]);
void print_magic_square(int n, char square[n][n]);

int main(void)
{ 
    int n;

    /*ask for a size of the array C99 REQUIRED!
    then make an array and call function to create square*/
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n];
    create_magic_square(n, square);

    /*print square*/ 
    print_magic_square(n, square);

    return 0;
}

void create_magic_square(int n, char square[n][n])
{
    /*declare variables
    x, y - for current numbers
    x2, y2 - for previous numbers*/
    int i, j, x, y, x2, y2;

    /*store zeros in an array*/
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }
    
    /*you can't assign x's value, because if
    user enters e.g. 10, it won't be in the middle*/
    x = n / 2; 
    y = 0;
    square[x][y] = 1;

    /*start from 2*/
    i = 2;
    while (i <= n * n) {
        x2 = x;
        y2 = y;
        if (x2 + 1 >= n)
            x = 0;
        else 
            x = x2 + 1;
        if (y2 - 1 < 0)
            y = n - 1;
        else 
            y = y2 - 1;
        
        if (square[x][y] == 0) {
            square[x][y] = i++;
        } else {
            if (y2 + 1 >= n)
                square[x = x2][y = 0] = i++;
            else
                square[x = x2][y = y2 + 1] = i++;
        }
    }
}

void print_magic_square(int n, char square[n][n])
{
    int i, j;
    /*print the magic square*/
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%5d", square[j][i]);
        }
        printf("\n");
    }
}