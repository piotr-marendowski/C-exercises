/*  Name: p8-08.c
    Purpose: Modified project 7.
    Author: Piotr Marendowski
    Date: 21.05.2022  */

#include <stdio.h>

#define LENGTH 5

int main(void)
{ 
    /*declare variables*/
    int quizes[LENGTH][LENGTH] = {0}, i, j = 0, n, lowest, highest;

    /*ask and calculate rows and columns*/
    for (i = 0; i < LENGTH; i++) {
        printf("Enter quiz %d: ", i + 1);
        for (j = 0; j < LENGTH; j++) {
           scanf("%d", &quizes[i][j]);
        }
    }
    
    /*calulate and print student's scores
    like caulculating columns from previous project*/
    printf("\n");
    for (i = 0; i < LENGTH; i++) {
        printf("Student %d: ", i + 1);
        n = 0;
        for (j = 0; j < LENGTH; j++) {
            n += quizes[j][i];
        }
        printf("total - %d ", n);
        printf("average - %d\n", n /= LENGTH);
    }
    
    /*calculate and print quiz's scores
    every quiz you need to adjust highest and lowest values
    check if number is higher or lower*/
    for (i = 0; i < LENGTH; i++) {
        printf("\nQuiz %d: ", i + 1);
        n = 0;
        highest = quizes[0][i];
        lowest = quizes[0][i];

        for (j = 0; j < LENGTH; j++) {
            n += quizes[i][j];
            if (quizes[i][j] > highest) {
               highest = quizes[i][j]; 
            }
            else if (quizes[i][j] < lowest) {
                lowest = quizes[i][j];
            }
        }            
        printf("average - %d, highest - %d, lowest - %d", n /= LENGTH, highest, lowest);
    }

    printf("\n");
    
    return 0;
}