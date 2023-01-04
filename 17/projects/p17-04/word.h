/* License: BSD-3-Clause license
Author: Piotr Marendowski, based on program made by K.N. King
Purpose: Prototypes for word.c
Modification date (DD/MM/YYYY): 28.11.2022 */

#ifndef WORD_H
#define WORD_H

/**********************************************************
 * read_word: Reads the next word from the input and      *
 *            stores it in word. Makes word empty if no   *
 *            word could be read because of end-of-file.  *
 *            Truncates the word if its length exceeds    *
 *            len.                                        *
 **********************************************************/
void read_word(char *word, int len);

#endif