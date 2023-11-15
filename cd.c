#include "monty.h"
/**
 * cd - this function handles going from one directory
 * to another on the shell
 * @command: this the command that we will be handling.
 * Return: 0 on success.
 */
int cd(char *command)
{
	size_t size = 1024;
	int k;
	char *buffer = malloc(size);
	char *clean_command;
	char **argv;

	if (buffer == NULL)
	return (-1);
	clean_command = print_with_no_adds(command, " ");
	argv = step_two_strtow(clean_command, " ");

	if (argv == NULL)
	{
		free(buffer);
		return (0);
	}
	else if (_strcmp(argv[0], "cd") == 0)
	{
		if (argv[1] == NULL)
		{
			chdir(getenv("HOME"));
		}
		else if (_strcmp(getcwd(buffer, size), argv[1]) == 0)
		{
			free(buffer);
			return (-1);
		}
		else
		{
			chdir(argv[1]);
			setenv("PWD", argv[1], 1);
		}
	}
	free(buffer);
	for (k = 0; argv[k] != NULL; k++)
	free(argv[k]);
	free(argv);
	argv = NULL;
	return (0);
}
