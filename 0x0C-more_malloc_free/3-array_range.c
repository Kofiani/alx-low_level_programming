#include "main.h"

/**
 * array_range - create an array
 * @min: set the minimum number
 * @max: set the maximum number
 * Return: integer array
 */

int *array_range(int min, int max)
{
	int *mem, len, i;

	if (min > max)
		return (NULL);

	len = max - min;
	mem = malloc(sizeof(*mem) * (len + 1));

	if (mem == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		mem[i] = min++;

	return (mem);
}
