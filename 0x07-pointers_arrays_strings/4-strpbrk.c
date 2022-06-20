#include "main.h"

/**
 * _strpbrk - function
 * @s: string
 * @accept: - string
 * Return: Value
 */

char *_strpbrk(char *s, char *accept)
{
	int ch, i = 0;

	while (*s != '\0')
	{
		for (ch = 0; accept[ch] != '\0'; ch++)
		{
			if (*s == accept[ch])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
