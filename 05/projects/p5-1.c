/*  Name: p5-1.c
    Purpose: Project 5-1.
    Author: NiceMan1337.
    Date: 26.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variable*/
    int number;
    
    /*ask user for a number*/
    printf("Enter a number: ");
    scanf("%d", &number);

    /*calculate and print out the "width" of the number*/
    if (number < 10) {
        printf("Number %d has 1 digit\n", number);
    }
    else if (number < 100) {
        printf("Number %d has 2 digits\n", number);
    }
    else if (number < 1000) {
        printf("Number %d has 3 digits\n", number);
    }
    else if (number < 10000) {
        printf("Number %d has 4 digits\n", number);
    }
    
    return 0;
}

/*Description:
You can also see williamgherman's solution*/