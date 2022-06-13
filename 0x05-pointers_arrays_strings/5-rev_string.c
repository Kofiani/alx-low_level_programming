#include "main.h"
/**
 * rev_string - function
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	
	i = sizeof(s);
	for (i = i -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
