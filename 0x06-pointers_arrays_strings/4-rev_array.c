#include "main.h"

/**
 * reverse_array
 * @a: array
 * @n: element
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int t;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		t = a[i];
		a[i] = a[j - i];
		a[j - i] = t;
		i++;
		j--;
	}
}
