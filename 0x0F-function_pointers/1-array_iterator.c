#include "function_pointers.h"

/**
 * array_iterator - iterates array
 * @array: array.
 * @size: array size.
 * @action: perform
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
