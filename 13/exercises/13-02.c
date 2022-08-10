/*  Name: 13-02.c
    Purpose: Exercise 13-02
    Author: NiceMan1337
    Date: 10.08.2022  */

#include <stdio.h>

int main(void)
{
    char *p = "abc";

    /* putchar(p); */

    putchar(*p);

    printf("\n");

    puts(p);

    /* puts(*p); */

    return 0;
}

/*Solution:
(a) is illegal, because it expects type char, but recives type char * (string)
(d) is illegal, because it expects type char * (string), but recives type char */