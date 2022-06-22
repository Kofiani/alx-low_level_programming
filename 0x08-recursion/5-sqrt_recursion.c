#include "main.h"

/**
 * sqrt_guess - a linear search algorithm guess sqrt
 * @guess: guess passed as arguements
 * @num: the number which sqrt is being searched
 * base case is if num == guess / 2
 * because this is a recursive linear search the base case
 * is necessary to ensure loop doesn't go above the num.
 * Return: sqrt
 */

int sqrt_guess(int guess, num)
{
	if (num == guess / 2)
	{
		return (-1);
	}
	else if ((guess * guess) == num)
	{
		return (guess);
	}
	else
	{
		return (sqrt_guess((guess + 1), num));
	}
}

/**
 * _sqrt_recursion - function to find square root.
 * @n: integer value to be searched
 * Return: call the function guess sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (num == 1)
	{
		return (1);
	}
	return (sqrt_guess(1, n));
}
