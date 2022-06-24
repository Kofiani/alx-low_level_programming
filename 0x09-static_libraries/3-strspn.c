#include "main.h"
#include <stdio.h>

/**
 * _strspn - function
 * @s: string
 * @accept: string
 * Return: value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0, i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}

	return (bytes);
}
