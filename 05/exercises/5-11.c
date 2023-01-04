/*  Name: 5-11.c
    Purpose: Exercise 5-11.
    Author: Piotr Marendowski
    Date: 24.03.2022  */

#include <stdio.h>

int main(void)
{ 
    int area_code;

    printf("Enter an area code: ");
    scanf("%d", &area_code);
    
    switch (area_code) {
        case 229: printf("Albany"); break;
        case 404: printf("Atlanta"); break;
        case 470: printf("Atlanta"); break;
        case 478: printf("Macon"); break;
        case 678: printf("Atlanta"); break;
        case 706: printf("Colubus"); break;
        case 762: printf("Columbus"); break;
        case 770: printf("Atlanta"); break;
        case 912: printf("Savannah"); break;
        default: printf("Area code not recognized");
    }

    return 0;
}