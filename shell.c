#include "mo_shell.h"
/**
 * main - the starting point of the programme
 */
int main(void)
{
	char prompt[140];

	while (1)
	{
	show_prompt();
	take_input(prompt);
	execute(prompt);
	}
	return (0);
}
