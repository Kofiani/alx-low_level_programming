#include "main.h"

/**
 * _calloc - an immitation of the standard library function, calloc.
 * @nmemb: number of elements
 * @size: bytes of the element
 * Return: void pointer value.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	ch = mem;

	for (i = 0; i < (nmemb * size); i++)
		ch[i] = '\0';

	return (mem);
}
