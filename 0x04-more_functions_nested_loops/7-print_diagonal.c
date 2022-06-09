#include "main.h"
/**
 * print_diagonal - function
 * @n: parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, i;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (a = 0; a < n; a++)
			{
				i = 0;

				while (i < a)
				{
					_putchar(' ');
					i++;
				}
				_putchar(92);
				_putchar('\n');
			}
		}
}
