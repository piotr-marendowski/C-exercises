/*  Name: p15-02.c
    Purpose: Modified justify.c 
    Author: Piotr Marendowski
    Date: 17.09.2022  */

/***** WORD.C *****/

#define MAX_WORD_LEN 20

void read_word(char *word, int len)
{
    int ch, pos = 0, word_len;

    while ((ch != ' ' && ch != EOF)) {
        if (pos < len)
            word[pos++] = ch;
        ch = read_char();
    }
    word[pos] = '\0';
    word_len = strlen(word); 
    if (word_len > MAX_WORD_LEN)
        word[MAX_WORD_LEN] = '*';
}

/***** JUSTIFY.C *****/
int main(void)
{
    char word[MAX_WORD_LEN+2];
    int word_len;

    clear_line();
    for (;;) {
        read_word(word, MAX_WORD_LEN+1);
        word_len = strlen(word);
        if (word_len == 0) {
            flush_line();
            return 0;
        }
        if (word_len + 1 > space_remaining()) {
            write_line();
            clear_line();
        }
        add_word(word);
    }
}