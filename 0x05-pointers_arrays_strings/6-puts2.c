#include "main.h"
/**
 * puts2 - function
 * @str: string
 * Return: none
 */

void puts2(char *str)
{
	int i;

	i = 2;
	_putchar(str[0]);
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_	putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
