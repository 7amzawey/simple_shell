#include "monty.h"
/**
 * *print_with_no_adds - prints the string with out
 * any extra additions like spaces and : and so on.
 * @str: is the prompt that will be handled
 * @d: is the stinky thing that we need to get rid of
 * Return: the clean and clear string
 */
char *print_with_no_adds(char *str, char *d)
{
int i = 0;
int j = 0;
char *word = malloc(strlen(str) + 1);

while (str[i] == *d)
	i++;
while (str[i] != '\0')
{
if ((str[i] == *d && str[i + 1] == *d) || (str[i] == *d && str[i + 1] == '\0'))
{
i++;
}
else
{
word[j] = str[i];
j++;
i++;
}
}
if (word[j] == *d)
{
word[j] = '\0';
}
word[j] = '\0';
return (word);
}
/**
 * **step_two_strtow - is taking the string clean and
 * produce an argv of this string
 * @string_with_no_spaces: is the clean string
 * @d: this is the delimiter
 * Return: the argv
 */
char **step_two_strtow(char *string_with_no_spaces, char *d)
{
	int k = 0, m = 0, o = 0;
	char **tokens = malloc(sizeof(char *) * 100);

	if (tokens == NULL)
		return (NULL);

	while (string_with_no_spaces[m] != '\0')
	{
	char *letters = malloc(strlen(string_with_no_spaces) + 1);

	if (letters == NULL)
	{
		free(tokens);
		return (NULL);
	}
	while (string_with_no_spaces[m] != *d && string_with_no_spaces[m] != '\0')
	{
		letters[k] = string_with_no_spaces[m];
		m++;
		k++;
	}
	letters[k] = '\0';
	tokens[o] = letters;
	k = 0;
	o++;
	if (string_with_no_spaces[m] != '\0')
		m++;
	}
	tokens[o] = NULL;
	return (tokens);
}
