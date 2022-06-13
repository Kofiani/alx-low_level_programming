#include "main.h"

/**
 * print_rev - function
 * @s: parameter
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\0')
		{
			i--;
			break;
		}
		i++;
	}
	while (i >= 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
