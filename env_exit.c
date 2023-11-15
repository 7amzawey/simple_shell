#include "monty.h"
/**
 * _exit - this function exits the shell if we passed it
 * as a command
 * @command: is the command that is going to be passed
 */
void exiting(char *command)
{
	char **argv;
	char *clean_command = print_with_no_adds(command, " ");
	char **env;

	argv = step_two_strtow(clean_command, " ");
	if (_strcmp(clean_command, "env") == 0)
	{
	for (env = environ; *env; env++)
	{
	print(*env);
	print("\n");
	}
	}
	else if (argv != NULL && _strcmp(argv[0], "exit") == 0)
	{
		if (_strcmp(argv[0], "exit") == 0 && argv[1] == NULL)
		{
			exit(0);
		}
		else if (argv[1] != NULL)
		{
		int num = _atoi(argv[1]);

		if (num > 255)
		{
			exit(num % 15);
		}
		else
		{
			exit(num);
		}
		}

	}
	free(argv);
}
