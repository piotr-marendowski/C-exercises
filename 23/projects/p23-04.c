/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Prints words in reverse
Modification date (DD/MM/YYYY): 19.02.2023 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 50

int main(void)
{
    int i = 0;
    char *p[LENGTH], str[LENGTH];

    printf("Enter: ");
    fgets(str, LENGTH, stdin);
    
    /* tokenize string
    return 0 if cannot tokenize first */
    if ((p[i] = strtok(str, " ")) == NULL)
        return 0;

    /* go for next */
    i++;
    while ((p[i] = strtok(NULL, " ")) != NULL)
        i++;

    /* print pointer after pointer,
    will print '\n' and I don't know how to fix it */
    for (i--; i >= 0; i--)
        printf("%s ", p[i]);

    printf("\n");

    return 0;
}