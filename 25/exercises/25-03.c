/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Exercise 3
Modification date (DD/MM/YYYY): 22.02.2023 */

#include <stdio.h>

int main(void)
{
    /*
    No. Leaving out the first byte in a multibyte character
    in Shift-JIS encoding could print an entirely different
    character, for example \x81\x40 is a valid multibyte character,
    while \x40 itself maps to the symbol @.
    */

    return 0;
}