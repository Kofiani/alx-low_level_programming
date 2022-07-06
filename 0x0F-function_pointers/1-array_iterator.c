#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates array
 * @array: array.
 * @size: array size.
 * @action: perform
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
