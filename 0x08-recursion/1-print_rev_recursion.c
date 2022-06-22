#include "main.h"

/**
 * _print_rev_recursion - function to
 * print recursively the inreverse of a string
 *@str: string pointer
 */

void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
