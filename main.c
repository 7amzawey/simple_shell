#include "monty.h"
/**
 * main - the one that puts everything together
 * Return: 0 if success
 */
int main(void)
{
	char prompt[150];
	char *command_line;
	char *clean_command;
	char **argv;
	char **last_argv;
	char *command;

	while (1)
	{
	show_prompt();
	command_line = _getline(prompt);
	clean_command = print_with_no_adds(command_line, " ");
	_setenv(clean_command);
	cd(clean_command);
	argv = step_two_strtow(clean_command, " ");
	last_argv = cd_sep(argv);
	command = find_command(last_argv[0]);
	exiting(last_argv[0]);
	last_argv[0] = command;
	execute(last_argv);
	}
	return (0);
}
