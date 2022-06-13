#include "main.h"

/**
 * puts_half - function
 * @str: param
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 > 0)
	{
		n = (i - 1) / 2;
		for (n++; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		n = i / 2;
		while (n < i)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
