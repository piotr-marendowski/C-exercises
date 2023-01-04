/*  Name: 13-01.c
    Purpose: Exercise 13-01
    Author: Piotr Marendowski
    Date: 10.08.2022  */

#include <stdio.h>

int main(void)
{
    /* (a) */ printf("%c", '\n');
    /* (b) */ printf("%c", "\n");
    /* (c) */ printf("%s", '\n');
    /* (d) */ printf("%s", "\n");
    /* (e) */ printf('\n');
    /* (f) */ printf("\n");
    /* (g) */ putchar('\n');
    /* (h) */ putchar("\n");
    /* (i) */ puts('\n');
    /* (j) */ puts("\n");
    /* (k) */ puts("");

    return 0;
}

/*Solution:
(b) - because expects type char and is supplied with type char * (string)
(c) - because expects type char * (string) and is supplied with type char
(e) - because expects type char * (string)
(h) - because expects type char and is supplied with type char * (string)
(i) - because expects type char * (string) */