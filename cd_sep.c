#include "monty.h"
/**
 * and_operator - this function handles and operator.
 * @argv: is the argument that will  be checked
 * @i: is the index of the argument in the array.
 * Return: 0 if success.
 */
int and_operator(char **argv, int i)
{
	int j = 0, k = 0;
	char *command;
	char **new_argv = malloc(sizeof(char *) * 10);

	if (new_argv == NULL)
	{
		return (-1);
	}
	if (_strcmp(argv[i], "&&") == 0)
	{
		for (j = 0; k < i; j++, k++)
		{
		new_argv[j] = argv[k];
		}
		command = new_argv[0];
		printf("%s", command);
		new_argv[0] = find_command(command);
		if (execute(new_argv) == -1)
		{
			perror("Error: No such a file or directory");
			free(new_argv);
			return (-1);
		}
		j = 0;
		if (argv[i + 1] != NULL)
		{
			k++;
		}
	}
	free(new_argv);
	return (0);
}
/**
 * cd_sep - this function will handle the commands
 * separator ;
 * @argv: a pointer to array of strings
 * Return: 0 on success.
 */
char **cd_sep(char **argv)
{
	int i = 0, j = 0, k = 0, m = 0, r;
	char *command;
	char **new_argv = malloc(sizeof(char *) * 10);
	char **last_argv = malloc(sizeof(char *) * 10);

	if (last_argv == NULL || new_argv == NULL)
	{
		return (NULL);
	}
	if (argv == NULL)
	{
		return (NULL);
	}
	while (argv[i] != NULL)
	{
	if (_strcmp(argv[i], "&&") == 0)
	{
	r = and_operator(argv, i);
	}
	if (_strcmp(argv[i], ";") == 0 || _strcmp(argv[i], "||") == 0)
	{
		for (j = 0; k < i; j++)
		{
		new_argv[j] = argv[k];
		k++;
		}
		new_argv[j] = NULL;
		command = new_argv[0];
		new_argv[0] = find_command(command);
		execute(new_argv);
		j = 0;
		if (argv[i + 1] != NULL)
		{
		k++;
		}
	}
	i++;
	}
	while (k <= i)
	{
		if (r != -1)
		{
		last_argv[m] = argv[k];
		m++;
		k++;
		}
	}
	free(new_argv);
	return (last_argv);
}
