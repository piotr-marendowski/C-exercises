/*  Name: p6-07.c
    Purpose: Modifies square3.c program.
    Author: Piotr Marendowski
    Date: 15.04.2022  */
#include <stdio.h>

int main(void)
{ 
    int n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    odd = 3;
    for (int i = 1; i <= n; odd += 2) {
        square = i * i;
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }

    return 0;
}

/*Decription:
Compile with c99 standard!*/