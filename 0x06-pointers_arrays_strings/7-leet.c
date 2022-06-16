#include "main.h"

/**
 * leet - function
 * @a: param
 * Return: pointer
 */

char *leet(char *a)
{
	char b[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	int c = 0, i;

	while (a[c])
	{
		for (i = 0; i < 7; i++)
		{
			if (a[c] == b[i] ||
			    a[c] - 32 == b[i])
			{
				a[c] = i + 0;


			}
		}
		c++;
	}
}
