#include "mo_shell.h"
/**
 * *_getline - this function reads a line from an input
 * stream (like the key board or afile) and stores it
 * in the buffer.
 * @lineptr: is a pointer to a variable that points to
 * buffer containing the read line.
 * buffer
 * Return: the line for further processes
 */
char *_getline(char *lineptr)
{
	char buff[1024];
	size_t n;
	size_t letters;

	letters = read(STDIN_FILENO, buff, sizeof(buff) - 1);
	if (letters <= 0)
	{
		return (NULL);
	}
	if (buff[letters - 1] == '\n')
	{
	buff[letters - 1] = '\0';
	letters--;
	}
	else
	{
		buff[letters] = '\0';
	}
	lineptr = malloc(letters + 1);

	if (lineptr == NULL)
	{
		return (NULL);
	}
	n = letters + 1;

	_memcpy(lineptr, buff, n);

	return (lineptr);
}
