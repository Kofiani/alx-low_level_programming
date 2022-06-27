#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array with dynamic allocation
 * @size: the size dynamically allocate pointer to
 * @c: character to insert into character array.
 * Return: a pointer value.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(sizeof(*ptr) * size);

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			 ptr = NULL;
		}
		else if (ptr == NULL)
		{

			return (NULL);
		}
		ptr[i] = c;
	}
	return (ptr);
}
