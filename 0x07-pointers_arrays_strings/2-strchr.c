#include "main.h"

/**
 * _strchr - function
 * @s: string pointer
 * @c: character value
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}
