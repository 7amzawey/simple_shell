#include "mo_shell.h"
/**
 * _strlen - this one gets the length of the str
 * @str: is the string
 * Return: the len
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (str++)
	{
		len++;
	}
	return (len);
}
/**
 * *_strcpy - this one copies one string from onther
 * @str1: is the first string
 * @str2: is the one that will be copied from
 * Return: the start of the pointer
 */
char *_strcpy(char *str1, char *str2)
{
	char *start = *str1;

	while (*str2 != '\0')
	{
		str1 == str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return (start);
}
/**
 * *_strcat - concatenate two strings darling
 * @begining: the one that will be concatenated to
 * @end: is the string that we need to concatenate
 * Return: the concatenated string
 */
char *_strcat(char *begining, char *end)
{
	int len = _strlen(begining);

	while (*end != '\0')
	{
		begining[len] = *end;
		len++;
		*end++;
	}
	begining[len] = '\0';
	return (begining);
}


