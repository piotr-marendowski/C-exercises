/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-09
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/

#include <stdio.h>

struct s {
    int a;
};

int main(void)
{
    struct s x;
    x.a = 10;

    printf("%d %d\n", x.a, (&x)->a);

    /*True. They are the same because x.a is (*x).a which is the same as (&x)->a */

    return 0;
}