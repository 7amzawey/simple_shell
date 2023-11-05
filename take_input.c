#include "mo_shell.h"
/**
 * take_input - this one will take the input
 * @prompt: will be the input
 */
void take_input(char *prompt)
{
	fgets(prompt, 1024, stdin);
}
