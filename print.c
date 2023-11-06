#include "mo_shell.h"
/**
 * print - the print function
 * @str: is the command that will be printed
 */
void print(const char *str)
{
	write(1, str, strlen(str));
}
