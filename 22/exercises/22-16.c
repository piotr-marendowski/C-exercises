/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 16
Modification date (DD/MM/YYYY): 23.01.2023 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "#123,456", sales_rank[20];

    sscanf(str, str[0] == '#' ? "%*[#]%[0123456789,]" : "%*[^#]*[#]%[0123456789,]", sales_rank);

    printf("Sales rank: ");
    puts(sales_rank);

    return 0;
}
