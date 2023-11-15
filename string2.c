#include "monty.h"
/**
 * _strncmp - compares two string to a certain(n)
 * point
 * @str1: is the first string
 * @str2: is the second string
 * @n: is the certain point.
 * Return: 0 on success the subtraction of the two
 * ASCII values of the two strings if not
 */
int _strncmp(char *str1, char *str2, int n)
{
	int i = 0;

	while (str2[i] != '\0' && i <= n)
	{
		if (str2[i] == str1[i])
		{
			i++;
			continue;
		}
		else if ((str1[i] + '0') - (str2[i] + '0') > 0)
		{
			return (1);
		}
		else if ((str1[i] + '0') - (str2[i] + '0') < 0)
		{
			return (-1);
		}
	}
	return (0);
}
/**
 * _is_digit - this function checks if the argument is
 * a digit
 * @arg: the argument that is going to be checked
 * Return: 1 if success 0 if not
 */
int _is_digit(int arg)
{
	if (arg >= '0' && arg <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _atoi - converts a string to an int number
 * @str: is the string that is going to be converted
 * Return: the int value
 */
int _atoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i;

	if (*str == '\0')
	{
		return (0);
	}
	if (str[0] == '-')
	{
		sign = -1;
	}
	for (i = 0; str[i]; i++)
	{
		if (_is_digit(str[i] == 0))
		{
			return (0);
		}
		res = res * 10 + str[i] - '0';
	}
	return (res * sign);
}
