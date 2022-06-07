#include "main.h"
/**
 * print_alphabet_x10 - a nested while loop
 *
 * return: nothing.
 */
void print_alphabet_x10(void)
{
	char beta = 0;
	int count = 0;

	while (count < 10)
	{
		beta = 97;
		while (beta < 123)
		{
			_putchar(beta);
			beta++;
		}
		_putchar('\n');
		count++;
	}
}
