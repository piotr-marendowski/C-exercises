/* License: BSD-3-Clause license
Author: Piotr Marendowski
Purpose: Exercise 16
Modification date (DD/MM/YYYY): 09.01.2022 */

#include <stdio.h>

int main(void)
{
    typedef unsigned char BYTE;
    typedef unsigned short WORD;
    typedef unsigned int DWORD;

    union {
        struct {
            DWORD eax, ebx, ecx, edx;
        } dword;
        struct {
            WORD axl, axh, bxl, bxh, cxl, cxh, dxl, dxh;
        } word;
        struct {
            BYTE axll, axlh, axhl, axhh;
            BYTE bxll, bxlh, bxhl, bxhh;
            BYTE cxll, cxlh, cxhl, cxhh;
            BYTE dxll, dxlh, dxhl, dxhh;
        } byte;
    } regs;

    return 0;
}
