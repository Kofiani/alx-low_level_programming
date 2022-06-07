#include "main.h"
/**
 * print_times_table - function
 * @n: parameter
 *
 * Return: 0.
 */
void print_times_table(int n)
{
	int m, p, k;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('0');
			for (p = 1; p <= n; p++)
			{
				k = m * p;
				_putchar(',');
				_putchar(' ');
					if (k <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else if (k <= 99)
					{
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else
					{
						_putchar(((k / 100) % 10) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
			}
		       _putchar('\n');
		}
	}
}
