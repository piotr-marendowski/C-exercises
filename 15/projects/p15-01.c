/*  Name: p15-01.c
    Purpose: Modified write_line function from justify.c
    Author: williamgherman
    Date: 17.09.2022  */

void write_line(void) {

    int extra_spaces, spaces_to_insert, i, j;
    more_space_toggle = !more_space_toggle;

    extra_spaces = MAX_LINE_LEN - line_len;
    for (i = 0; i < line_len; i++) {
        if (line[i] != ' ')
            putchar(line[i]);
        else {
            spaces_to_insert = extra_spaces / (num_words - 1);
            if (more_space_toggle && extra_spaces > 0) {
                spaces_to_insert++;
                more_space_toggle = !more_space_toggle;
            }
            for (j = 1; j <= spaces_to_insert + 1; j++)
                putchar(' ');
            extra_spaces -= spaces_to_insert;
            num_words--;
        }
    }
    putchar('\n');
}