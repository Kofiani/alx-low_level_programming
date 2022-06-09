#include <stdio.h>
/**
 * main - Function
 * Return: 0.
 */

int main(void)
{
	long int c, a;
	
	c = 612852475143;
	for (a = 2; a <= c; a++)
	{
		if (c % a == 0)
		{
			c /= a;
			a--;
		}
	}
	printf("%ld\n", a);
	return (0);
}
