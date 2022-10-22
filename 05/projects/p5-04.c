/*  Name: p5-04.c
    Purpose: Displays the corresponding description to a wind speed.
    Author: Piotr Marendowski
    Date: 27.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variable*/
    int speed;
    
    /*ask user for wind speed*/
    printf("Enter wind speed (in knots): ");
    scanf("%d", &speed);

    /*calculate and print out the description*/
    if (speed < 1) {
        printf("calm\n");
    }
    else if (speed > 1 && speed < 3) {
        printf("ligth air\n");
    }
    else if (speed > 4 && speed < 27) {
        printf("breeze\n");
    }
    else if (speed > 28 && speed < 47) {
        printf("gale\n");
    }
    else if (speed > 48 && speed < 63) {
        printf("storm!\n");
    }
    else if (speed > 63) {
        printf("Get out of here! It's a hurricane!\n");
    }
    
    return 0;
}

/*Description:
You can also see williamgherman's solution*/