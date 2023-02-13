/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Exercise 7
Modification date (DD/MM/YYYY): 13.02.2022 */

#include <stdio.h>
#include <string.h>

void capitalize_all_gs(char *s)
{
    s = strrchr(s, 'g');
    while (s != NULL)
    {
        *s = 'G';
        s = strrchr(s + 1, 'g');
    }
    return;
}

int main(void)
{
    char str[] = "We had a great day together.";
    capitalize_all_gs(str);
    printf("%s", str); 

    /* We had a Great day toGether. */

    return 0;
}