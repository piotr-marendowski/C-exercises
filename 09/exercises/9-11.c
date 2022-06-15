/*  Name: 9-11.c
    Purpose: Exercise 9-11.
    Author: NiceMan1337
    Date: 15.06.2022  */

#include <stdio.h>

float compute_GPA(char grades[], int n);

int main(void)
{ 
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    int n = 5;

    printf("Average: %.2f\n", compute_GPA(grades, n));

    return 0;
}

float compute_GPA(char grades[], int n)
{
    int i;
    float average = 0;
    for (i = 0; i < n; i++)
    {
        switch (grades[i])
        {
        case 'A':
            average += 4;
            break;
        case 'B':
            average += 3;
            break;
        case 'C':
            average += 2;
            break;
        case 'D':
            average += 1;
            break;
        case 'F':
            average += 0;
            break;
        default:
            break;
        }
    }
    return average / n; 
}