#include "main.h"

/**
 * strLen - function to recursively calculate length of a string
 * @str: string pointer
 * Return: int variable
 */

int strLen(char *str)
{
	int j = 0;

	if (*str)
	{
		j++;
		j += strLen(str + 1);
	}

	return (j);
}

/**
 * chk_pos - function to compare the position of each character from
 * front to back
 * @str: the pointer variable for the string
 * @f: variable to check position going front
 * @b: variable to check position going back
 * Return: integer variable
 */

int chk_pos(char *str, int f, int b)
{
	if (f == b)
	{
		return (1);
	}

	if (str[f] != str[b])
	{
		return (0);
	}
	else if (f < b + 1)
	{
		return (chk_pos(str, f + 1, b - 1));
	}
	return (1);
}

/**
 * is_palindrome - function accepts one variable and calls the position
 * checker
 * @str: string pointer variable
 * Return: integer variable
 */

int is_palindrome(char *str)
{
	int n = strLen(str);

	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (chk_pos(str, 0, n - 1));
	}
}
