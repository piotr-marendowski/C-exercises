/*
    License: BSD-3-Clause license
    Author: Piotr Marendowski
    Purpose: Exercise 17-19
    Dependencies: None
    Modification date (DD/MM/YYYY): 20.11.2022
*/
#include <stdio.h>
#include <string.h>

void *search(char *a);
void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
 {{"new",       new_cmd},
  {"open",      open_cmd},
  {"close",     close_cmd},
  {"close all", close_all_cmd},
  {"save",      save_cmd},
  {"save as",   save_as_cmd},
  {"save all",  save_all_cmd},
  {"print",     print_cmd},
  {"exit",      exit_cmd},
 };

int main(void)
{
    int i = 0;
    char ch, a[10];

    printf("Enter a command: ");
    while ((ch = getchar()) != '\n')
        a[i++] = ch;

    search(a);

    return 0;
}

void *search(char *a)
{
    int i;
    for (i = 0; i < (int)(sizeof(file_cmd)/sizeof(file_cmd[0])); i++)
    {
        if (strcmp(a, file_cmd[i].cmd_name) == 0)
            (*file_cmd[i].cmd_pointer)();
    }
}

void new_cmd(void)
{
    printf("New cmd");
}

void open_cmd(void)
{
    printf("Open cmd");
}

void close_cmd(void)
{
    printf("Close cmd");
}

void close_all_cmd(void)
{
    printf("Close all cmd");
}

void save_cmd(void)
{
    printf("Save cmd");
}

void save_as_cmd(void)
{
    printf("Save as cmd");
}

void save_all_cmd(void)
{
    printf("Save all");
}

void print_cmd(void)
{
    printf("Print cmd");
}

void exit_cmd(void)
{
    printf("Exit");
}