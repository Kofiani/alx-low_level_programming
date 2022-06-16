#include "main.h"

/**
 * _strcat - function name
 * @dest: destination parameter
 * @src: source to copy from
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = '\0';

	return (dest);
}
