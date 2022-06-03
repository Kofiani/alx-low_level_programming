#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declare variables for the destination*/
	int d = 0;
	int c;

	while (d < 10)
	{
		c = 1;
		while (c <= 9)
		{
			putchar(d % 10 + '0');
			putchar(c % 10 + '0');
			if (c != d && d < c)
			{
			}
			putchar(',');
			putchar(' ');
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);

}
