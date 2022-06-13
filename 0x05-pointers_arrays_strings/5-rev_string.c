#include "main.h"
/**
 * rev_string - function
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char *b, *e, t;

	i = 0;
	b = s;
	e = s;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		e++;
	}
		for (j = 0; j < i / 2; j++)
		{
			t = *e;
			*e = *b;
			*b = t;
			b++;
			e--;
		}
}
