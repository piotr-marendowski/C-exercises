/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 12
Modification date (DD/MM/YYYY): 09.01.2023 */

#include <stdio.h>

unsigned short create_short(unsigned char high_byte, unsigned char low_byte)
{
    return (high_byte << 8) + low_byte;
}

int main(void)
{

    return 0;
}

/*Solution:
Must add parentheses, because + has highier precendence
than <<.*/