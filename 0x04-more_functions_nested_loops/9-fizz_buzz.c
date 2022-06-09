#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int i;
	char *f = "Fizz";
	char *b = "Buzz";
	char *fb = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s ", f);
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("%s ", b);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", fb);
		}
	}
	printf("\n");
}
