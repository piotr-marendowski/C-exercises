/*  Name: p5-11.c
    Purpose: Prints an English word for a number.
    Author: NiceMan1337
    Date: 30.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variables*/
    int n1, n2;

    /*ask user for a number*/
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &n1, &n2);

    /*calculate and print out the first half of the number*/ 
    switch (n1)
    {
    case 0:
        break;
    case 1:
        break;
    case 2:
        printf("twenty-");
        break;
    case 3: 
        printf("thirty-");
        break;
    case 4:
        printf("fourty-");
        break;
    case 5:
        printf("fifty-");
        break;
    case 6:
        printf("sixty-");
        break;
    case 7:
        printf("seventy-");
        break;
    case 8:
        printf("eighty-");
        break;
    case 9:
        printf("ninety-");
        break;
    default:
        printf("It's not a two-digit number!");
        break;
    }

    /*calculate and print out the second half of the number
    if first number is 1, then print one of those*/    
    if (n1 == 1) {
        switch (n2) {
        case 0:
            printf("ten\n");
            break;
        case 1:
            printf("eleven\n");
            break;
        case 2:
            printf("twelve\n");
            break;
        case 3: 
            printf("thirteen\n");
            break;
        case 4:
            printf("fourteen\n");
            break;
        case 5:
            printf("fifteen\n");
            break;
        case 6:
            printf("sixteen\n");
            break;
        case 7:
            printf("seventeen\n");
            break;
        case 8:
            printf("eighteen\n");
            break;
        case 9:
            printf("nineteen\n");
            break;
        default:
            printf("It's not a two-digit number!");
            break;
        }
    }
    /*otherwise, just add normal number to first half*/
    else {
        switch (n2) {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3: 
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        default:
            printf("It's not a two-digit number!");
            break;
        }
    }
    
    return 0;
}
