#include "main.h"

/**
 * malloc_checked - creates pointer dynamically allocated memory address.
 * @b: the size of memory to be created
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
