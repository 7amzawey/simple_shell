#include "mo_shell.h"
/**
 * take_input - this one will take the input
 * @prompt: will be the input
 * Return: the input
 */
char *take_input(char *prompt)
{
	size_t len;

	fgets(prompt, 1024, stdin);
	len = strlen(prompt);

	if (len > 0 && prompt[len - 1] == '\n')
	{
		prompt[len - 1] = '\0';
	}
	return (prompt);
}
