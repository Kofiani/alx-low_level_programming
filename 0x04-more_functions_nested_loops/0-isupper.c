#include "main.h"
/**
 * _isupper - function
 * @c: parameter
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		while (c < 'Z')
		{
			c++;
			return (1);
		}
	}
	return (0);
}
