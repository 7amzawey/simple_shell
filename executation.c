#include "monty.h"
/**
 * execute - will execuate the commands
 * @argv: is the vector of arguments
 * Return: 0 if successeded to execute the command
 */
int execute(char **argv)
{
	char *path = argv[0];
	pid_t child;

	if (path == NULL)
	return (0);
	child = fork();

	if (child == -1)
	{
		perror("fork failed");
		return (-1);
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
	if (execve(path, argv, NULL) == -1)
	{
		perror("execve failed");
		return (-1);
		exit(EXIT_FAILURE);
	}
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
