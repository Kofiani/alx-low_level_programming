#include "main.h"
/**
 * times_table - function.
 *
 * Return: 0.
 */
void times_table(void)
{	int m;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{	
			m = (i * j);
			if ( m > 9 )
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
