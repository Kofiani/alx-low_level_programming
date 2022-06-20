#include "main.h"

/**
 * _strchr - function
 * @s: string pointer
 * @c: character value
 * Return: value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
