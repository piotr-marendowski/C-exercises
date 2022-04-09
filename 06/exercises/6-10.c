/*  Name: 6-10.c
    Purpose: Exercise 6-10.
    Author: NiceMan1337
    Date: 09.04.2022  */

#include <stdio.h>

int main(void)
{ 
    int i = 10;

    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
        if (i > 0)
            continue;
    }

    /*It's the same as:
    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
        if (i > 0)
            goto end;
        end; 
    }
    I couldn't think of any fun way to show this,
    continue is the same as goto at statement nested
    higher.*/

    return 0;
}