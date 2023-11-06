#include "mo_shell.h"
/**
 * execute - that will be the one who executes the cds
 * @argc: is the number of arguments
 * @argv: is the vector of arguments
 */
void execute(int argc, char *argv[])
{
	if (argc >= 2)
	{
	char *path = argv[1];
	pid_t child = fork();

	if (child == -1)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
	if (execve(path, &argv[1], NULL) == -1)
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
}
