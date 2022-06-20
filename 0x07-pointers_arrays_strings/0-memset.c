#include "main.h"

/**
 * _memset - function
 * @s: pointer
 * @b: variable
 * @n: interger
 * Return: pointer address
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
	}

	return (s);
}
