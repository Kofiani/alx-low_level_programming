#include "main.h"
/**
 * times_table - function.
 *
 * Return: 0.
 */
void times_table(void)
{	int m, i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			m = (i * j);
			_putchar(',');
			_putchar(' ');
			if (m > 9)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			} else if (m < 10)
			{
				_putchar(' ');
				_putchar(m % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
