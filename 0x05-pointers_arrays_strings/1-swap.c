#include "main.h"

/**
 * swap_int - function
 * @*a: pointer
 * @b: pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
