/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 13
Modification date (DD/MM/YYYY): 14.02.2022 */

#include <stdio.h>
#include <string.h>

int count_words(char *sentence)
{
    int num = 1;
    char *p = strtok(sentence, " \t");

    while ((p = strtok(NULL, " \t")) != NULL)
        num++;
    
    return num;
}

int main(void)
{
    char str[] = "Lorem ipsum dolor sit amet";

    printf("Words: %d\n", count_words(str));

    return 0;
}