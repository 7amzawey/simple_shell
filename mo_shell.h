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
void print(const char *str);
void show_prompt(void);
void take_input(char *prompt);
void execute(char *prompt);
#endif /* end of the header file */
