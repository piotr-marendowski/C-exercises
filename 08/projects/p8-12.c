/*  Name: p8-12.c
    Purpose: Modified project 5 from chaper 7.
    Author: Piotr Marendowski
    Date: 25.05.2022  */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    /*declare variables*/ 
    char ch;
    int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1,
                      8, 5, 1, 3, 1, 1, 3, 10, 1,
                      1, 1, 1, 4, 4, 8, 4, 10};
    int val, num;

    /*ask user for a word*/
    printf("Enter a word: ");

    /*calculate every letter and add it's value to the score*/
    while ( (ch = getchar()) != '\n') {
        ch = toupper(ch);

        /*calculate number between first character in array and entered
        then add according to the table*/
        num = ch - 'A';
        val += values[num];
    }

    /*print out the result*/
    printf("Scrabble value: %d\n", val);

    return 0;
}

/*Description:
It's one of my first big brain times,
oh my god what a brilliant being I am
just kidding, but seriously it feels amazing*/