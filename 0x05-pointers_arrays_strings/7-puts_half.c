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

	if (i % 2 == 1)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
