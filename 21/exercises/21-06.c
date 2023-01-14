/* License: BSD-3-Clause license
Author: Piotr Marendowski and William Gherman
Purpose: Exercise 6
Modification date (DD/MM/YYYY): 14.01.2022 */

#include <stdio.h>

int main(void)
{
    /*
    (a) They are reserved for the standard library.

    (b) The _ctype array will contain bitfields of length 8 which describe
    the properties of the characters passed into them. _ctype[9] is a whitespace character
    and will have bit 5 set: 0010_0000. _ctype[32] will likewise be defined as a whitespace
    character: 0010_0000. _ctype[65] is an uppercase character, having its 0 bit set:
    0000_0001. _ctype[94] is a punctuation character, having its bit 4 set: 0001_0000.

    (c) By using an array, lookup times will be fast, no calculations will need to
    be performed, and macro parameters wlil only need to be evaluated once.
    */

    return 0;
}