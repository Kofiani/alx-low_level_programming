#include "main.h"
/**
 * rev_string - function
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i = sizeof(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
