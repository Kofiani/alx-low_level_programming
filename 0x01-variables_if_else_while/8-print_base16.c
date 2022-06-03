#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i <= 16)
	{
		if (i > 9)
		{
			while (c <= 'f')
			{
				putchar(c);
				c++;
			}
		}
		else
		{
			putchar (i % 16 + '0');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
