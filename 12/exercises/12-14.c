/*  Name: 12-14.c
    Purpose: Exercise 12-14
    Author: NiceMan1337
    Date: 28.07.2022  */

#include <stdio.h>
#include <stdbool.h>

bool search(int *a, int n, int key);

int main(void)
{
    int temperatures[7][24] = {{1, 2, 3, 4, 5}};
    int n = 7 * 24, key = 3;

    printf("The temperature: %d was", key);
    if (search(temperatures, n, key))
        printf(" ");
    else
        printf("n't ");
    printf("found in an array.\n");

    return 0;
}

bool search(int *a, int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++)
    {
        if (*p == key)
            return true;
    }
    
    return false;
}