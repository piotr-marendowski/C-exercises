/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Writes date in format "month_name day, year" e.g. September 13, 2010
Modification date (DD/MM/YYYY): 05.02.2023 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int d, m, y;
    char* months[12] = {"January", "February", "March", "April", 
                        "May", "June", "July", "August", "September", 
                        "October", "November", "December"};

    if (argc != 2) {
        fprintf(stderr, "usage: %s date; where date is m-d-yyyy or m/d/yyyy\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* get from argv, *[-/] - get something (- or /)*/
    sscanf(argv[1], "%d%*[-/]%d%*[-/]%d", &m, &d, &y);
    printf("%s %.2d, %.4d\n", months[m-1], d, y);


    return 0;
}

