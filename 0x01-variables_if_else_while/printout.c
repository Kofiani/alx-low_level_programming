#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a < 100)
	{
		b = 0;
		while (b < 100)
		{
		//	c = 0;
		//	while (c < 10)
		//	{
		//		d = 0;
		//		while (d < 10)
		//		{
					if (a != b)
					{
						putchar('0' + a % 10);
						putchar(' ');
						putchar('0' + b % 10);
						//putchar('0' + c % 10);
						//putchar('0' + d % 10);
						if (b <= 99 )
						{
							putchar(',');
							putchar(' ');
						}
					//}
					//d++;
				//}
				//c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
