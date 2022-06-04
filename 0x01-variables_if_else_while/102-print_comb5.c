#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int a, b;

	while (a < 100)
	{
		b = 0;
		while (b < 100)
		{
			if (b > a)
			{
				putchar('0' + a / 10);
				putchar('0' + a % 10);
				putchar(' ');
				putchar('0' + b / 10);
				putchar('0' + b % 10);
				if (a < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
