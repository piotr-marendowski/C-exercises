/*  Name: 13-13.c
    Purpose: Exercise 13-13
    Author: Piotr Marendowski
    Date: 19.08.2022  */

#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void)
{
    char domain[] = "knking.com";
    char index_url[25];

    build_index_url(domain, index_url);

    puts(index_url);

    return 0;
}

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}