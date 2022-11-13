/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-02
    Dependencies: None
    Modification date (DD/MM/YYYY): 13.11.2022
*/

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value)
{
    /*plus one for a null character*/
    int *q, *p = (int *) malloc(sizeof(int) * n + 1);
    if (p == NULL)
    {
        printf("Couldn't allocate memory (malloc), exiting\n");
        exit(EXIT_FAILURE);
    }

    /*else - assign q same starting point (start of the array)
    initialize all elements of the array through q and
    add a null character at the end*/
    for (q = p; n > 0; n--)
    {
        *q = initial_value;
        q++;
    }
    *q = '\0';

    return p;
}

int main(void)
{
    int n, initial_value, *p;

    printf("Enter number of members in an array: ");
    scanf("%d", &n);
    printf("Enter an initial value to set in all elements of that array: ");
    scanf("%d", &initial_value);

    p = create_array(n, initial_value);

    printf("Created array:\n");
    while (*p != '\0')
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    return 0;
}