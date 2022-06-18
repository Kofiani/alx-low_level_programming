#include <stdio.h>
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
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j > 0; j--)
	{
		e[j] = b[i];
		printf("%s\n", *e);
	}
}
