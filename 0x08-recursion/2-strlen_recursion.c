#include "main.h"

/**
 * _strlen_recursion - function to recursively check the length
 * of a string
 * @s: pointer to string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	static int i;

	i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
