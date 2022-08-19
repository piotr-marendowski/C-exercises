/*  Name: 13-18.c
    Purpose: Exercise 13-18
    Author: NiceMan1337
    Date: 19.08.2022  */

#include <stdio.h>
#include <string.h>

void remove_filename(char *url);

int main(void)
{
    char url[] = "http://knking.com/index.html";

    remove_filename(url);

    puts(url);

    return 0;
}

void remove_filename(char *url)
{
    char *p = url;

    while (*url)
    {
        if (*url == '/')
            p = url;
        url++;
    }
    *p = '\0';
}