/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-04
    Dependencies: None
    Modification date (DD/MM/YYYY): 13.11.2022
*/

#include <stdio.h>
#include <stdlib.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
struct rectangle *p;

int main(void)
{
    p = (struct rectangle *) malloc(sizeof(struct rectangle));
    p->upper_left.x = 10;
    p->upper_left.y = 25;
    p->lower_right.x = 20;
    p->lower_right.y = 15;

    return 0;
}