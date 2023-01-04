/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-05
    Dependencies: None
    Modification date (DD/MM/YYYY): 13.11.2022
*/

#include <stdio.h>

struct {
    union {
        char a, b;
        int c;
    } d;
    int e[5];
} f, *p = &f;

int main(void)
{
    /*(a)   p->b = ' ';  -->  p->d.a = ' ';*/
    /*(b)*/ p->e[3] = 10;
    /*(c)*/ (*p).d.a = '*';
    /*(d)   p->d->c = 20;  -->  p->d.c = 20;*/

    return 0;
}