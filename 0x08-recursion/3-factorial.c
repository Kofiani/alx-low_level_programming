#include "main.h"

/**
 * factorial - find fact of n * fact(n -1)
 * @n: integer
 * Return: integer value
 */

int factorial(int n)
{
	if(n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n -1));
}
