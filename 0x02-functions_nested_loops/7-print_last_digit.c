#include "main.h"
/**
 * print_last_digit - function definition.
 * @c: parameter
 *
 * Return: integer
 */
int print_last_digit(int c)
{
	int m = c % 10;

	if (m < 0)
	{
		_putchar(-m + '0');
		return (-m);
	}
	_putchar(m + '0');
	return (m);
}
