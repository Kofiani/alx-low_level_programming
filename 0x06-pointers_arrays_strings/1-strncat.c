#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatination function
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
