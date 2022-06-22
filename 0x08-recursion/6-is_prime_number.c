#include "main.h"

/**
 * chkr - checks if number is a prime number
 * @y: the value checker
 * @n: the value being checked
 * Return: integer value
 */

int chkr(int y, int n)
{
	if (y + 1 == n)
	{
		return (1);
	}
	else if (n % y == 0 && y > 1)
	{
		return (0);
	}
	else
	{
		return (chkr((y + 1), n));
	}
}

/**
 * is_prime_number - function calling prime number chkr
 * @n: number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	else
	{
		return (chkr(1, n));
	}
}
