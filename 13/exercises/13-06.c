/*  Name: 13-06.c
    Purpose: Exercise 13-06
    Author: NiceMan1337
    Date: 18.08.2022  */

#include <stdio.h>

void censor(char a[], int n)
{
    char *p = a;

    for (; p < a + n; p++)
    {
        if (*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o')
        {
            *p = *(p+1) = *(p+2) = 'x';
            p++;
        }
    }
}

int main()
{
    char a[] = "barfoobarfffoobbar";
    int n = 20;

    censor(a, n);

    puts(a);

    return 0;
}