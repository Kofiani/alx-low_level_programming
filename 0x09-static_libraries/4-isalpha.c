#include "main.h"
/**
 * _isalpha - checks if the character entered is an alphabet.
 *
 * @c: is a integer character
 *
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
