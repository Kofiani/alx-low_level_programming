#include "main.h"

/**
 * _puts_recursion - function to print charcters and a newline
 * @s: pointer variable to string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
	}
}
