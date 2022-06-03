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
	int f;

	while (d < 10)
	{
		c = 1;
		while (c <= 9)
		{
			f = 2;
			while (f <= 9)
			{
				if (c != d && f != d && f != c && d < c && c < f)
				{
					putchar(d % 10 + '0');
					putchar(c % 10 + '0');
					putchar(f % 10 + '0');
					if (d != 7)
					{
					putchar(',');
					putchar(' ');
					}
				}
				f++;
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);

}
