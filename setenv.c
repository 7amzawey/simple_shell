#include "monty.h"
/**
 * _setenv - this function handles the environmental
 * variables.
 * @command: this is the setenv or unsetenv command
 * Return: 0 on success..
 */
int _setenv(char *command)
{
	char *clean_command = print_with_no_adds(command, " ");
	char **argv = step_two_strtow(clean_command, " ");

	if (argv != NULL)
	{
		if (_strcmp(argv[0], "setenv") == 0)
		{
			char *name = argv[1];
			char *value = argv[2];

			if (setenv(name, value, 0) == -1)
			{
				perror("failed to set a new eviromental variable\n");
			}
		}
		else if (_strcmp(argv[0], "unsetenv") == 0)
		{
			char *name = argv[1];

			if (unsetenv(name) == -1)
			{
				perror("failed to unset the new environmental variable\n");
			}
		}
	}
	return (0);
}
