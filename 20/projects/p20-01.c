/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Union with float values (float and struct 32-bit representation)
Modification date (DD/MM/YYYY): 09.01.2023 */

#include <stdio.h>

int main(void)
{
    struct float_value {
        unsigned int fraction: 23, exponent: 8, sign_bit: 1;
    };

    union float_union {
        float i;
        struct float_value fl;
    };

    union float_union u;
    u.fl.sign_bit = 1;
    u.fl.exponent = 128;
    u.fl.fraction = 0;
    printf("Bits: %d %d %d\nValue: %.1f\n", u.fl.sign_bit, u.fl.exponent, u.fl.fraction, u.i);

    return 0;
}
