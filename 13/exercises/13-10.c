/*  Name: 13-10.c
    Purpose: Exercise 13-10
    Author: NiceMan1337
    Date: 18.08.2022  */

#include <stdio.h>
#include <string.h>

char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}

int main(void)
{
    char str[] = "hello";
    char *p = str;

    duplicate(p);

    puts(str);

    return 0;
}

/*Solution:
q points to nothing and thus strcpy won't work. */