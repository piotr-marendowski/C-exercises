/*  Name: p10-07.c
    Purpose: Modified poker.c program from chapter 10.
    Author: NiceMan1337
    Date: 29.06.2022  */

#include <stdio.h>
#include <ctype.h> /*for isdigit*/
#include <stdbool.h>

void clear_digits_array(void);
void process_digits(void);
void print_digits_array(void);

int MAX_DIGITS = 10;
int len = 0; /*for array length*/
char digits[3][40];

int main(void)
{
        clear_digits_array();
        process_digits();
        print_digits_array();

    return 0;
}

void clear_digits_array(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
}

void process_digits(void)
{
    char ch;

    /*ask for a number
    then check if character is digit
    then add to len 4, because its place of space
    between characters in digits array,
    then based on this "pointer" hop to different
    places and place there characters
    do it over and over until you get a character
    then check next and so on*/
    printf("Enter a number: ");
    while ((ch = getchar()) != '\n')
    {
        if (isdigit(ch))
        {
                len += 4;
                switch (ch - 0)
                {
                    case '1':
                        digits[1][len - 1] = '|';
                        digits[2][len - 1] = '|';
                        break;
                    case '2':
                        digits[0][len - 2] = '_';
                        digits[1][len - 1] = '|';
                        digits[1][len - 2] = '_';
                        digits[2][len - 2] = '_';
                        digits[2][len - 3] = '|';
                        break;
                    case '3':
                        digits[0][len - 2] = '_';
                        digits[1][len - 1] = '|';
                        digits[1][len - 2] = '_';
                        digits[2][len - 1] = '|';
                        digits[2][len - 2] = '_';
                        break;
                    case '4':
                        digits[1][len - 1] = '|';
                        digits[1][len - 2] = '_';
                        digits[1][len - 3] = '|';
                        digits[2][len - 1] = '|';
                        break;
                    case '5':
                        digits[0][len - 2] = '_';
                        digits[1][len - 2] = '_';
                        digits[1][len - 3] = '|';
                        digits[2][len - 1] = '|';
                        digits[2][len - 2] = '_';
                        break;
                    case '6':
                        digits[0][len - 2] = '_';
                        digits[1][len - 2] = '_';
                        digits[1][len - 3] = '|';
                        digits[2][len - 1] = '|';
                        digits[2][len - 2] = '_';
                        digits[2][len - 3] = '|';
                        break;
                    case '7':
                        digits[0][len - 2] = '_';
                        digits[1][len - 1] = '|';
                        digits[2][len - 1] = '|';
                        break;
                    case '8':
                        digits[0][len - 2] = '_';
                        digits[1][len - 1] = '|';
                        digits[1][len - 2] = '_';
                        digits[1][len - 3] = '|';
                        digits[2][len - 1] = '|';
                        digits[2][len - 2] = '_';
                        digits[2][len - 3] = '|';
                        break;
                    case '9':
                        digits[0][len - 2] = '_';
                        digits[1][len - 1] = '|';
                        digits[1][len - 2] = '_';
                        digits[1][len - 3] = '|';
                        digits[1][len - 2] = '_';
                        digits[2][len - 1] = '|';
                        digits[2][len - 2] = '_';
                        break;
                    case '0':
                        digits[0][len - 2] = '_';
                        digits[1][len - 1] = '|';
                        digits[1][len - 3] = '|';
                        digits[2][len - 1] = '|';
                        digits[2][len - 2] = '_';
                        digits[2][len - 3] = '|';
                        break;
                    case ' ': break;
                default:
                    break;
                }
        }
    }
    
}

void print_digits_array(void)
{
    int i, j;
    
    /*read an array with 3 rows
    and len columns for less than 10 characters
    (40 columns / 4 colums for each character)*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < len; j++)
            printf("%c", digits[i][j]); 
        printf("\n");
    }
}

/*Description:
Check out better solution by: williamgherman. */