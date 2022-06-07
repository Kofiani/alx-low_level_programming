#include "main.h"
/**
 * print_alphabet - function to print all the english
 * alphabet characters using decimal values
 */
void print_alphabet(void)
{
	char alpha = 97;

	while (alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
