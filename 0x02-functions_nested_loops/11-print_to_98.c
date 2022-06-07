#include <stdio.h>
/**
 * print_to_98 - function
 * @n: parameter
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;
		for(; n; i > 99; i--);
		{
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		for(; n < 98; n++)
		{
			printf("%d, ", n)
		}
	}
	printf("%d\n", n);
}
