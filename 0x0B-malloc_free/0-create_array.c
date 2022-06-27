#include "main.h"

/**
 * create_array - creates an array with dynamic allocation
 * @size: the size dynamically allocate pointer to
 * @c: character to insert into character array.
 * Return: a pointer value.
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr = (sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		if (size == 0)
			return (NULL);
		else if (ptr == NULL)
			return (NULL);
		else
			ptr[i] = c;
	}
	
	free(ptr);
	return (ptr);
}
