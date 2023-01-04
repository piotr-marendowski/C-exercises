/*  Name: 13-17.c
    Purpose: Exercise 13-17
    Author: Piotr Marendowski
    Date: 19.08.2022 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension)
{
    while (*file_name++ != '.')
        ;
    while (*file_name && *extension)
        if (toupper(*file_name++) != toupper(*extension++))
            return false;
    return true;
}

int main(void)
{
    char file_name[] = "memo.txt";
    char extension[] = "TXT";

    printf("Is this extension correct? ");
    printf(test_extension(file_name, extension) ? "Yes" : "No");
    printf("\n");
    
    return 0;
}