#include "main.h"
/**
 * print_last_digit - function definition.
 * @c: parameter
 *
 * Return: integer
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		_putchar((-1 * c) % 10 + '0');
		return ((-1 * c) % 10);
	}
	_putchar(c % 10 + '0');
	return (c % 10);
}
