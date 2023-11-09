#include "mo_shell.c"
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
	char **directory = step_two_strtwo(clean_path, ":");
	char *dir = *directory;
	while (directory != NULL)
	{
	char *full_path = malloc(_strlen(dir) + _strlen(command) + 2);
	_strcpy(full_path, dir);
	_strcat(full_path, "/");
	_strcat(full_path, command);
	if (access(full_path, X_OK) == 0)
	{
		return (full_path);
	}
	free(full_path);

