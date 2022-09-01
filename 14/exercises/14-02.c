/*  Name: 14-02.c
    Purpose: Exercise 14-02
    Author: NiceMan1337
    Date: 01.09.2022  */

#include <stdio.h>
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void)
{
    int array[10];

    printf("%d\n", ((int) NELEMS(array)));
    /*I casted to int, because it returns type long long int*/

    return 0;
}