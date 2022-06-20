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
	int i = 0;
	unsigned int j;

	while (*dest != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	return (dest);
}
