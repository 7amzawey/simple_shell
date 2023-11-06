#include "mo_shell.h"
/**
 * main - the starting point of the programme
 * Return: the simple shell that we have creating if
 * succeded or not
 */
int main(void)
{
	char prompt[140];
	char *argv[3];

	argv[0] = "program";
	argv[2] = NULL;

	while (1)
	{
	show_prompt();
	take_input(prompt);
	argv[1] = prompt;
	execute(2, argv);
	}
	return (0);
}
