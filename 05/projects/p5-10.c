/*  Name: p5-10.c
    Purpose: Converts a numerical grade into a letter grade.
    Author: NiceMan1337
    Date: 29.03.2022  */

#include <stdio.h>

int main(void)
{ 
    /*declare variable*/
    int grade;

    /*ask user for a grade*/
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    /*check if it is within boundaries*/
    if (grade > 100 || grade < 0) {
        printf("Wrong boundaries!\n");
    }
    /*calculate letter grade if not*/
    else {
        if (grade <= 100 && grade >= 90) {
            printf("Letter grade: A\n");
        }
        else if (grade <= 89 && grade >= 80) {
            printf("Letter grade: B\n");
        }
        else if (grade <= 79 && grade >= 70) {
            printf("Letter grade: C\n");
        }
        else if (grade <= 69 && grade >= 60) {
            printf("Letter grade: D\n");
        }
        else if (grade <= 59 && grade >= 0) {
            printf("Letter grade: F\n");
        }
    } 

    return 0;
}

/*Description:
For better solution go to williamgherman/c-solutions */