#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i >= 0)
		{
			putchar(i + '0');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
