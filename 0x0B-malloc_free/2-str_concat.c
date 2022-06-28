#include "main.h"
#include <string.h>

/**
 * strLen - count length of string
 * @s: string pointer
 * Return: integer value
 */

int strLen(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	else
	{
		while (*s)
		{
			i++;
			s++;
		}
	}
	return (i);
}


/**
 * str_concat - concatenate two strings
 * @s1: the first half of the string
 * @s2: the second half of the string
 * Return: pointer variable.
 */

char *str_concat(char *s1, char *s2)
{
	int size = strLen(s1) + strLen(s2) + 1;
	char *ptr = malloc(sizeof(*ptr) * size);
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		j = 0;
		while (*s1)
		{
			ptr[i] = *s1;
			i++;
			s1++;

		}

		while (*s2)
		{
			ptr[i + j] = *s2;
			j++;
			s2++;
		}
	}
	return (ptr);
}
