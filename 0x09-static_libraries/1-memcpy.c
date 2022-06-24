#include "main.h"
/**
 * _memcpy - function
 * @dest: destination
 * @src: source
 * @n: buffer size.
 * Return: pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
