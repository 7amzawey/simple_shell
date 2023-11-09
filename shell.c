#include "mo_shell.h"
/**
 * main - the starting point of the programme
 * Return: the simple shell that we have creating if
 * succeded or not
 */
int main(void)
{
	char prompt[140];
	char **argv;
	
	while (1)
	{
	show_prompt();
	take_input(prompt);
	argv = step_two_strtow(print_with_no_spaces(prompt));
	execute(argv);
	free(argv);
	}
	return (0);
}
