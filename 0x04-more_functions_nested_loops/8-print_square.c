#include "main.h"
/**
 * print_square - function
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			b = 0;

			while (b < size)
			{
				_putchar(35);
				b++;
			}
			_putchar('\n');
		}
	}
}
