/*  Name: 13-12.c
    Purpose: Exercise 13-12
    Author: Piotr Marendowski
    Date: 18.08.2022  */

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char file_name[] = "13-12.c";
    char extension[5];

    get_extension(file_name, extension);

    puts(extension);

    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    while(*file_name)
    {
        if (*file_name++ == '.')
        {
            strcpy(extension, file_name);
            return;
        }
    }
    strcpy(extension, "");
}