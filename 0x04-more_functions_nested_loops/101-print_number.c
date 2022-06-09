#include "main.h"
/**
 * print_number - function
 * @n: parameter
 * Return: 0
 */

void print_number(int n)
{
	int c = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	while (c <= n)
	{
		c *= 10;
	}

	if (n > 0)
	{
		c /= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar((n / c) % 10 + '0');
	}
}
