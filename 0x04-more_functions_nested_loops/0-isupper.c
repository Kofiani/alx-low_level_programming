#include "main.h"
/**
 * _isupper - function
 * @c: parameter
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		while (c < 91 )
		{
			c++;
			return (1);
		}
	}
	return (0);
}
