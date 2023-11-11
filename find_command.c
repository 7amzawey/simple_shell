#include "mo_shell.h"
/**
 * *find_command - this function finds the path of the
 * command
 * @command: this the command it self
 * Return: the path
 */
char *find_command(char *command)
{
	char *path = getenv("PATH");
	char *clean_path = print_with_no_adds(path, ":");
	char **directory = step_two_strtow(clean_path, ":");
	char *full_path = NULL;
	int i;

	for (i = 0; directory[i] != NULL; i++)
	{
	full_path = malloc(_strlen(directory[i]) + _strlen(command) + 2);
	_strcpy(full_path, directory[i]);
	_strcat(full_path, "/");
	_strcat(full_path, command);
	if (access(full_path, X_OK) == 0)
	{
		return (full_path);
	}
	free(full_path);
	full_path = NULL;
	}
	for (i = 0; directory[i] != NULL; i++)
	{
		free(directory[i]);
	}
	free(directory);
	return (full_path);
}
