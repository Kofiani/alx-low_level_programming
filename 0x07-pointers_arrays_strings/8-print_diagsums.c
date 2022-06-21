#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l2r = 0, r2l = 0;

	for (i = 0; i < size; i++)
	{
		p = (l * size) + i;
		l2r += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += 8(a + p);
	}

	print("%d, %d\n", l2r, r2l);
}
