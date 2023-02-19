/* License: BSD-3-Clause license
Author: William Gherman
Purpose: Exercise 1
Modification date (DD/MM/YYYY): 19.02.2023 */

#include <stdio.h>

int main(void)
{
    /* (a)
    assert makes sure that things are running correctly,
    some things which may be implementation defined could
    be tested, such as if INT_MAX is greater than a certain value.

    (b)
    Signals are out of scope of the program, and as such, the program
    has no control over when they occur. For example, the user,
    operating system or another process could raise a SIGTERM signal
    to terminate the program (such as the CTRL+C signal in a terminal),
    and the program will be requested to terminate. Other out of scope problems
    are hardware failures, such as a drained laptop battery which causes program
    termination or other undefined behavior; and, the running environment's
    operating system including other low-level software could interfere
    with a running program, like a forced operating system update, which
    could terminate the program or cause other undefined behavior. 
    */

    return 0;
}