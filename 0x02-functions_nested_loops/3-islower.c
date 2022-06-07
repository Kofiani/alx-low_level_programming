#include "main.h"
/**
 * _islower - expects an integer
 * @c: parameter
 *
 * Return: 1 or 0.
 */
int _islower(int c)
{
		if (c >= 97 && c < 123)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
