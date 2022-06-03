#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 10;
	int c = 0;

	while (c < n )
	{
		putchar(c + '0');
		if (c != 9)
			putchar(',');
			putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
