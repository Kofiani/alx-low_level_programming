#include "main.h"
int strLen(char *s);
/**
 * strLen - counts the number of chars in a string
 * @s: the string pointer variable
 * Return: integer value
 */

int strLen(char *s)
{
	int i;

	if (s == NULL)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (*s)
		{
			i++;
			s++;
		}
	}

	return (i);
}

/**
 * _strdup - duplicates string into another memory
 * @str: string pointer variable
 * Return: pointer.
 */

char *_strdup(char *str)
{
	int i, len = strLen(str) + 1;
	char *ptr = malloc(sizeof(*ptr) * len);

	if (str == NULL)
	{
		ptr = NULL;
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (*str)
		{
			ptr[i] = *str;
			i++;
			str++;
		}
	}

	return (ptr);
}
