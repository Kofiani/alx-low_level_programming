#include "main.h"
/**
 * print_number - function
 * @n: parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int c = 1;
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		a = n * (-1);
	}
	else
	{
		a = n;
	}

	while (c <= a)
	{
		c *= 10;
	}

	if (a > 0)
	{
		c /= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar((a / c) % 10 + '0');
	}
}
