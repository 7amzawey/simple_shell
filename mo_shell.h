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
#include <errno.h>
extern char **environ;
/*
 * the string prototypes
 */
int _strlen(char *str);
char *_strcpy(char *str1, char *str2);
char *_strcat(char *begining, char *end);
char *_memcpy(char *destination, char *src, size_t n);
int _strcmp(char *str1, char *str2);
int _atoi(char *str);
int _is_digit(int arg);
/*
 * shell prototypes
 */
void print(const char *str);
void show_prompt(void);
char *_getline(char *lineptr);
char *take_input(char *prompt);
void exiting(char *command);
int _setenv(char *command);
int execute(char **argv);
char *find_command(char *command);
char *print_with_no_adds(char *str, char *d);
char **step_two_strtow(char *string_with_no_spaces, char *d);
#endif /* end of the header file */
