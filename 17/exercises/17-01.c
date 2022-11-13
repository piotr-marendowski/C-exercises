/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-01
    Dependencies: None
    Modification date (DD/MM/YYYY): 13.11.2022
*/

#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n)
{
    void *p;
    p = (void *)malloc(sizeof(int) * n);

    if (p == NULL)
    {
        printf("Couldn't allocate memory (malloc), exiting\n");
        exit(EXIT_FAILURE);
    }

    /*else*/
    return p;
}

int main(void)
{
    int n;

    printf("Enter number of bytes to allocate: ");
    scanf("%d", &n);
    printf("First address of allocated memory is %p\n", my_malloc(n));

    return 0;
}