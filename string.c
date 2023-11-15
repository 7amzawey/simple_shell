#include "monty.h"
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
	while (*str++)
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
	char *start = str1;

	while (*str2 != '\0')
	{
		*str1 = *str2;
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
	int len2 = 0;

	while (end[len2] != '\0')
	{
		begining[len] = end[len2];
		len++;
		len2++;
	}
	begining[len] = '\0';
	return (begining);
}
/**
 * _strcmp - this function compare between two strings
 * it returns zero if they are the same and a positive
 * or a negative value else
 * @str1: the first string
 * @str2: the second string
 * Return: zero if both one and other value else
 */
int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] != '\0')
	{
		if (str1[i] == str2[i])
		{
			i++;
			continue;
		}
		else if ((str1[i] + '0') - (str1[i] + '0') > 0)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}
/**
 * *_memcpy - it copies a n number of characters from
 * one string to another
 * @src: the source file that will be copied
 * @destination: the one that recieve that copy
 * @n: the number of chars that is going to be copied
 * Return: the copied string.
 */
char *_memcpy(char *destination, char *src, size_t n)
{
	size_t i = 0;

	if (n == 0 || src == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0' && i <= n)
	{
		destination[i] = src[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
