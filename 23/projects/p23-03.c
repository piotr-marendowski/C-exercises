/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Capitalizes the first letter in each word
Modification date (DD/MM/YYYY): 15.02.2023 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i = 0;
    char ch, str[50];

    /* added to previous */
    printf("Enter: ");
    while ((ch = getchar()) != '\n')
        str[i++] = ch;
    
    /* capitalize:
    if it is the first place OR previous character is white space,
    AND letter is not uppercase */
    for(i = 0; i < strlen(str); i++)
    {
        if (i == 0 || str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
            str[i] = toupper(str[i]);
    }
    puts(str);

    return 0;
}