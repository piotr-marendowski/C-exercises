/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 14
Modification date (DD/MM/YYYY): 23.01.2022 */

#include <stdio.h>
#include <stdlib.h>

/* (a) */
char *my_fgets(char *s, int n, FILE *stream)
{
    int i = 0, ch;

    while ((ch = getc(stream)) != EOF && i < n && ch != '\n')
        s[i++] = ch;

    s[i] = '\0';

    return s;
}

/* (b) */
int *my_fputs(const char *s, FILE *stream)
{
    while ((putc(*s, stream)) != EOF && *s != '\0')
        s++;

    return 0;
}

int main(int argc, char *argv[])
{
    FILE *fp;
    int n = 20;
    char s[20], s1[6] = "hello";

    if (argc != 2) {
        fprintf(stderr, "usage: 22-14 filename\n");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    puts(my_fgets(s, n, fp));
    printf("\n");

    my_fputs(s1, stdout);
    printf("\n");

    /* Output:
    first line

    hello
    */

    return 0;
}
