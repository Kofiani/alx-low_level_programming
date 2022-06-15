#include "main.h"

/**
 * _strcat - function name
 * @dest: destination parameter
 * @src: source to copy from
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *concat, *temp, rtn;
	int i, j;

	temp = src;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		concat[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		concat[j] = src[i];
		i++;
		j++;
	}
	concat[j] = '\0';

	return (temp);
}
