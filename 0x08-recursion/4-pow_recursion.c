#include "main.h"

/**
 * _pow_recursion - function to find exponent of integer
 * @x: integer to convert
 * @y: exponent
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	int i = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	i *= _pow_recursion(x, y - 1);

	i *= x;

	return (i);
}
