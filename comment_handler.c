#include "monty.h"
/**
 * comment_handler - this function handle the comments
 * @argv: is the arguments
 * Return: the command with out comments
 */
char **comment_handler(char **argv)
{
	int j = 0, i = 0, k = 0;
	char **new_argv = malloc(sizeof(char *) * 10);

	if (new_argv == NULL)
	{
		return (NULL);
	}
	while (argv[i] != NULL)
	{
		if (_strcmp(argv[i], "#") == 0)
		{
			for (j = 0; k < i; j++, k++)
			{
			new_argv[j] = argv[k];
			}
			new_argv[j] = NULL;
			break;
		}
		i++;
	}
	return (new_argv);
}
