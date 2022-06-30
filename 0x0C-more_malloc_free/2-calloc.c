#include "main.h"

/**
 * _calloc - an immitation of the standard library function, calloc.
 * @nmemb: number of elements
 * @size: bytes of the element
 * Return: void pointer value.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **mem = malloc(size);
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		mem[i] = malloc(size);

	chr = mem;

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = '\0';

	return (mem);
}
