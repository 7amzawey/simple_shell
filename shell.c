#include "mo_shell.h"
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
	char *command;

	while (1)
	{
	show_prompt();
	command_line = _getline(prompt);
	clean_command = print_with_no_adds(command_line, " ");
	exiting(clean_command);
	argv = step_two_strtow(clean_command, " ");
	command = find_command(argv[0]);
	argv[0] = command;
	execute(argv);
	}
	return (0);
}
