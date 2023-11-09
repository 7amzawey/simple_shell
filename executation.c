#include "mo_shell.h"
/**
 * execute - that will be the one who executes the cds
 * @argc: is the number of arguments
 * @argv: is the vector of arguments
 */
void execute(char **argv)
{
	
	char *path = argv[0];
	pid_t child = fork();

	if (child == -1)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
	if (execve(path, argv, NULL) == -1)
	{
		perror("execve failed");
		exit(EXIT_FAILURE);
	}
	}
	else
	{
		wait(NULL);
	}
	
}
