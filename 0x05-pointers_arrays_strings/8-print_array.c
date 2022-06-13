#include <stdio.h>
#include "main.h"

/**
 * print_array - function
 * @a: array
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}
