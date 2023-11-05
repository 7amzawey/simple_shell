#include "mo_shell.h"
/**
 * execute - that will be the one who executes the cds
 * @prompt: is the path of the executable
 */
void execute(char *prompt)
{
	pid_t child = fork();

	if (child == -1)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
	char *arguments[] = {prompt, NULL};
	if(execve(prompt, arguments, NULL) == -1)
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
