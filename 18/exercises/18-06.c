/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 6
Modification date (DD/MM/YYYY): 07.12.2022 */

#include <stdio.h>

void print_error(const char *message)
{
    static int n = 1;
    printf("Error %d: %s\n", n++, message);
}

int main (void)
{

    return 0;
}