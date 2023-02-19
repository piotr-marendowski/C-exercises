/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Exercise 4
Modification date (DD/MM/YYYY): 19.02.2023 */

#include <stdio.h>

int main(void)
{
    /* (a)
    double try_math_fcn(double (*func)(double), double x, const char *message)
    {
        errno = 0;
        double ret = (*func)(x);
        if (errno == 0)
            return ret;
        perror(message);
        exit(EXIT_FAILURE);
    }

    (b)
    #define TRY_MATH_FCN(f,x) (try_math_fcn((f), (x), "Error in call of " #f))
    */

    return 0;
}