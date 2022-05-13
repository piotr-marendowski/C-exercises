/*  Name: p7-13.c
    Purpose: Counts average word length in a sentence.
    Author: NiceMan1337
    Date: 13.05.2022  */

#include <stdio.h>

int main(void) {

    /*declare variables*/
    int count = 1;
    float len = 0.0, avg = 0.0;
    char ch;

    /*ask for a sentence*/
    printf("Enter a sentence: ");

    /*calculate average length of a sentence
    and words*/
    while ((ch = getchar()) != '\n') {
        len++;
        if (ch == ' ') {
            count++;
        }
    } 

    /*calculate average length of words*/
    len -= count;
    avg = len / count;

    /*print the result*/
    printf("Average word length: %.1f\n", avg);

    return 0;
}