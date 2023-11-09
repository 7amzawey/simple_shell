#ifndef MO_SHELL_H
#define MO_SHELL_H
/*
 * the libraries
 */
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/*
 * the prototypes
 */
int _strlen(char *str);
char *_strcpy(char *str1, char *str2);
char *_strcat(char *begining, char *end);
void print(const char *str);
void show_prompt(void);
void take_input(char *prompt);
void execute(char **argv);
char *print_with_no_adds(char *str, char *d);
char **step_two_strtow(char *string_with_no_spaces, char *d);
#endif /* end of the header file */
